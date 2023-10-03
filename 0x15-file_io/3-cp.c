#include "main.h"

/**
 * main - copies the content from one file to another.
 * @argc: the argument count.
 * @argv: the argument vector.
 * Return: 0 on success, exit with error code on failure.
 */
int main(int argc, char *argv[])
{
	int sourceFileDescriptor, destinationFileDescriptor;
	ssize_t bytesRead, bytesWritten;
	char buffer[BFFSZ];
	const char *sourceFile, *destinationFile;

	/* Check if the correct number of arguments are provided */
	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to");

	sourceFile = argv[1];
	destinationFile = argv[2];

	/* Open the source file for reading */
	sourceFileDescriptor = open(sourceFile, O_RDONLY);
	if (sourceFileDescriptor == -1)
		print_error(98, "Can't read from file");

	/* Open the destination file for writing (truncate if it exists) */
	destinationFileDescriptor = open(destinationFile, O_WRONLY |
							O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (destinationFileDescriptor == -1)
		print_error(99, "Can't write to file");

	/* Copy the content from source to destination */
	while ((bytesRead = read(sourceFileDescriptor, buffer, BFFSZ)) > 0)
	{
		bytesWritten = write(destinationFileDescriptor, buffer, bytesRead);
		if (bytesWritten == -1)
			print_error(99, "Can't write to file");
	}

	if (bytesRead == -1)
		print_error(98, "Can't read from file");

	/* Close the file descriptors */
	if (close(sourceFileDescriptor) == -1)
		print_error(100, "Can't close fd");

	if (close(destinationFileDescriptor) == -1)
		print_error(100, "Can't close fd");

	return (0);
}

/**
 * print_error - prints an error message.
 * @errorCode: the error code.
 * @errorMessage: the error message.
 */
void print_error(int errorCode, const char *errorMessage)
{
	dprintf(STDERR_FILENO, "Error: %s\n", errorMessage);
	exit(errorCode);
}

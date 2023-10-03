#include "main.h"

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

/**
 * main - copies the content from one file to another.
 * @arargumentCountgc: the argument count.
 * @argumentVector: the argument vector.
 * Return: 0 on success, exit with error code on failure.
 */
int main(int argumentCount, char *argumentVector[])
{
	/* Check if the correct number of arguments are provided */
	if (argumentCount != 3)
	{
		print_error(97, "Usage: cp file_from file_to");
	}

	const char *sourceFile = argumentVector[1];
	const char *destinationFile = argumentVector[2];

	int sourceFileDescriptor, destinationFileDescriptor;
	ssize_t bytesRead, bytesWritten;
	char buffer[BUFSIZE];

	/* Open the source file for reading */
	if ((sourceFileDescriptor = open(sourceFile, O_RDONLY)) == -1)
	{
		print_error(98, "Can't read from file");
	}

	/* Open the destination file for writing (truncate if it exists) */
	if ((destinationFileDescriptor = open(destinationFile, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)) == -1)
	{
		print_error(99, "Can't write to file");
	}

	/* Copy the content from source to destination */
	while ((bytesRead = read(sourceFileDescriptor, buffer, BUFSIZE)) > 0)
	{
		bytesWritten = write(destinationFileDescriptor, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			print_error(99, "Can't write to file");
		}
	}

	if (bytesRead == -1) {
		print_error(98, "Can't read from file");
	}

	/* Close the file descriptors */
	if (close(sourceFileDescriptor) == -1) {
		print_error(100, "Can't close fd");
	}

	if (close(destinationFileDescriptor) == -1) {
		print_error(100, "Can't close fd");
	}

	return 0;
}

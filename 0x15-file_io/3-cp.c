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
	char *buffer;
	const char *sourceFile, *destinationFile;

	/* Check if the correct number of arguments are provided */
	if (argc != 3)
	{
		dprintf (STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}

	sourceFile = argv[1];
	destinationFile = argv[2];

	buffer = malloc(sizeof(char) * BFFSZ);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destinationFile);
		exit(99);
	}

	/* Open the source file for reading */
	sourceFileDescriptor = open(sourceFile, O_RDONLY);
	bytesRead = read(sourceFileDescriptor, buffer, BFFSZ);
	if (sourceFileDescriptor == -1 || bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourceFile);
		free(buffer);
		exit(98);
	}

	destinationFileDescriptor = open(destinationFile, O_WRONLY | O_CREAT | O_TRUNC, 0664);


	do {
		bytesWritten = write(destinationFileDescriptor, buffer, bytesRead);
		if (destinationFileDescriptor == -1 || bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destinationFile);
			free(buffer);
			exit(99);
		}

		bytesRead = read(sourceFileDescriptor, buffer, BFFSZ);
		destinationFileDescriptor = open(destinationFile, O_WRONLY | O_APPEND);

	} while (bytesRead > 0);

	free(buffer);
	if (close(destinationFileDescriptor) == -1 || close(sourceFileDescriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", -1);
		exit(100);
	}
	return (0);
}


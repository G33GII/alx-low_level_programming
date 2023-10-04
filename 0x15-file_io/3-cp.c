#include "main.h"

/**
 * main - copies the content from one file to another.
 * @argc: the argument count.
 * @argv: the argument vector.
 * Return: 0 on success, exit with error code on failure.
 */
int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	ssize_t bytesRead, bytesWritten,
	sourceFileDescriptor, destinationFileDescriptor, _close1, _close;
	char *buffer, *sourceFile, *destinationFile;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	sourceFile = argv[1];
	destinationFile = argv[2];
	buffer = malloc(sizeof(char) * BFFSZ);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destinationFile);
		exit(99);
	}
	sourceFileDescriptor = open(sourceFile, O_RDONLY);
	bytesRead = read(sourceFileDescriptor, buffer, BFFSZ);

	if (sourceFileDescriptor < 0 || bytesRead < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourceFile);
		free(buffer);
		exit(98);
	}
	destinationFileDescriptor = open(destinationFile,
			O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while (bytesRead > 0)
	{
		bytesWritten = write(destinationFileDescriptor, buffer, bytesRead);
		if (destinationFileDescriptor < 0 || bytesWritten < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destinationFile);
			free(buffer);
			exit(99);
		}
		bytesRead = read(sourceFileDescriptor, buffer, BFFSZ);
		destinationFileDescriptor = open(destinationFile, O_WRONLY | O_APPEND);
	}

	free(buffer);
	_close = close(destinationFileDescriptor);
	_close1 = close(sourceFileDescriptor);
	if (_close1 < 0 || _close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %lu\n",
						(_close < 0) ? destinationFileDescriptor : sourceFileDescriptor);
		exit(100);
	}
	return (0);
}


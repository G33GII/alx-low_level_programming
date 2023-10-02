#include "main.h"

/**
 * read_textfile - Read and write data from a file to standard output.
 * @filename: The name of the file to read from.
 * @letters: The number of bytes to read and write.
 *
 * Return: The number of bytes successfully written, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t total_read, total_written;

	/* Open the file for reading */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0); /* Error opening the file */
	}

	/* Allocate memory for a buffer to store data */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0); /* Memory allocation failed */
	}

	/* Read data from the file */
	total_read = read(file_descriptor, buffer, letters);

	/* Write the read data to standard output (stdout) */
	total_written = write(STDOUT_FILENO, buffer, total_read);

	/* Free the allocated buffer and close the file */
	free(buffer);
	close(file_descriptor);

	if (total_read < 0 || total_written < 0)
	{
		return (0); /* Error occurred during reading or writing */
	}

	return (total_written);
}

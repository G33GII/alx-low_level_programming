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
	ssize_t rd = 0, wr, srcFd, destFd, closeSrc, closeDest;
	char *buf, *srcFile, *destFile;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	srcFile = argv[1];
	destFile = argv[2];

	buf = malloc(sizeof(char) * BFFSZ);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destFile);
		exit(99);
	}

	srcFd = open(srcFile, O_RDONLY);
	if (srcFd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", srcFile);
		free(buf);
		exit(98);
	}

	destFd = open(destFile, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destFd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destFile);
		free(buf);
		exit(99);
	}

	do {
		rd = read(srcFd, buf, BFFSZ);
		if (srcFd < 0 || rd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", srcFile);
			free(buf);
			exit(98);
		}

		wr = write(destFd, buf, rd);
		if (destFd < 0 || wr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destFile);
			free(buf);
			exit(99);
		}

	} while (rd > 0);

	free(buf);
	closeDest = close(destFd);
	closeSrc = close(srcFd);
	if (closeSrc < 0 || closeDest < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %lu\n",
				(closeDest < 0) ? destFd : srcFd);
		exit(100);
	}
	return (0);
}

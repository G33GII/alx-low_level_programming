#include "main.h"

/**
 * main -
 * @argc:
 * @argv:
 * Return:

int main (int argc, char *argv[])
{
    FILE *frm, *ft;
    char c;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: cp file_from file_to\n");
        exit (97);
    }

    frm = fopen(argv[1], "r");
    ft = fopen(argv[2], "w");


    if (frm == NULL || ft == NULL)
        return (-1);


    while ((c = fgetc(frm)) != EOF)
        fputc (c, ft);


    fclose(frm);
    fclose(ft);
    return (0);   
}
=======================================================================*/


char *create_buffer(char *file);
void close_file(int fd);


char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/* ==================================================== */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/*===========================================================*/

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}


/*========================================================*/

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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
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
		if (bytesRead < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourceFile);
			free(buffer);
			exit(98);
		}
		/*destinationFileDescriptor = open(destinationFile, O_WRONLY | O_APPEND);*/
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



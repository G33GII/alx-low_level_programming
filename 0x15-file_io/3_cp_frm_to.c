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
	destFd = open(destFile, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (srcFd < 0 || destFd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				(srcFd < 0 ? srcFile : destFile));
		free(buf);
		srcFd < 0 ? exit(98) : exit(99);
	}

	do {
		rd = read(srcFd, buf, BFFSZ);
		if (rd < 0)
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




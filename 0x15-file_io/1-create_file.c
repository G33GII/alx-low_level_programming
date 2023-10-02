#include "main.h" /* Include necessary headers */

/**
 * create_file - Create or overwrite a file with the specified content.
 * @filename: The name of the file to create or overwrite.
 * @text_content: The content to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, content_length = 0;

	if (filename == NULL)
		return (-1); /* Return -1 if filename is NULL */

	if (text_content != NULL)
	{
		/* Calculate the length of text_content */
		for (content_length = 0; text_content[content_length]; content_length++)
			continue;
	}

/* Open the file for writing, create if it doesn't exist, truncate if it does*/
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	/* Write text_content to the file */
	bytes_written = write(file_descriptor, text_content, content_length);

	if (file_descriptor == -1 || bytes_written == -1)
	{
		/* Return -1 on open or write error */
		return (-1);
	}

	/* Close the file */
	close(file_descriptor);

	/* Return 1 to indicate success */
	return (1);
}

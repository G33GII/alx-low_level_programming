#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    ssize_t fileDescriptor, writeStatus;
    int length;

    /* Check if filename is NULL */
    if (filename == NULL)
        return (-1);

    /* Calculate the length of text_content */
    if (text_content != NULL)
    {
        length = 0;
        while (text_content[length])
            length++;
    }

    /* Open the file in write and append mode */
    fileDescriptor = open(filename, O_WRONLY | O_APPEND);
    /* Write the content to the file */
    writeStatus = write(fileDescriptor, text_content, length);

    /* Check if the file was opened and written to successfully */
    if (fileDescriptor == -1 || writeStatus == -1)
    {
        return (-1);
    }

    /* Close the file */
    close(fileDescriptor);
    return (1);
}

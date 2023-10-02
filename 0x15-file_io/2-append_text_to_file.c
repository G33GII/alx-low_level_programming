#include "main.h"

/**
 * append_text_to_file -
 * @filename:
 * @text_content:
 * Return:
 */
int append_text_to_file(const char *filename, char *text_content)
{
    ssize_t fx, idx;
    int x;
 
        if (filename == NULL)
            return (-1);
        if (text_content != NULL)
        {
            x = 0;
            while (text_content[x])
                x++;
        }
        fx = open (filename, O_WRONLY | O_APPEND);
        idx = write(fx, text_content, x);

        if (fx == -1 || idx == -1)
        {
            return (-1);
        }
        close (fx);
}

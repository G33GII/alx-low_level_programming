#ifndef MAIN_H
#define MAIN_H

/* Function prototype for _putchar */
int _putchar(char c);

/*
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which src will be appended.
 * @src: The source string that will be appended to dest.
 *
 * Returns: A pointer to the modified dest string.
 */
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);

#endif /* MAIN_H */


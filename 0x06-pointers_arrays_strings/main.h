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

/* Function prototype for _strncat */
char *_strncat(char *dest, char *src, int n);

/* Function prototype for _strncpy */
char *_strncpy(char *dest, char *src, int n);

/* Function prototype for _strcmp */
int _strcmp(char *s1, char *s2);

/* Function prototype for reverse_array */
void reverse_array(int *a, int n);

/* Function prototype for string_toupper */
char *string_toupper(char *str);

/* Function prototype for cap_string */
char *cap_string(char *str);

/* Function prototype for leet */
char *leet(char *str);

/* Function prototype for rot13 */
char *rot13(char *str);

#endif /* MAIN_H */


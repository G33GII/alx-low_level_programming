#include "main.h"

/**
 * string_nconcat - Concatenates n characters from two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sxr;               /* Pointer to the concatenated string */
	unsigned int x = 0, z = 0, lxn = 0, lzn = 0;

	/* Calculate the length of s1 */
	while (s1 && s1[lxn])
		lxn++;

	/* Calculate the length of s2 */
	while (s2 && s2[lzn])
		lzn++;

	/* Allocate memory for the concatenated string */
	if (n < lzn)
		sxr = malloc(sizeof(char) * (lxn + n + 1));
	else
		sxr = malloc(sizeof(char) * (lxn + lzn + 1));

	/* Check for memory allocation failure */
	if (!sxr)
		return (NULL);

	/* Copy characters from s1 to the new string */
	while (x < lxn)
	{
		sxr[x] = s1[x];
		x++;
	}
	/* Concatenate n characters from s2 if n < lzn */
	while (n < lzn && x < (lxn + n))
	{
		sxr[x++] = s2[z++];
	}
	/* Concatenate the remaining characters from s2 if n >= lzn */
	while (n >= lzn && x < (lxn + lzn))
	{
		sxr[x++] = s2[z++];
	}

	sxr[x] = '\0'; /* Null-terminate the concatenated string */
	return (sxr);
}

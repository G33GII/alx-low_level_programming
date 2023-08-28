#include "main.h"
/**
 *
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
	if (haystack == '\0' || needle == '\0')
		return (0);

	char *temp;

	while (*haystack != '\0')
	{
		temp = needle;
		while (*temp != '\0')
		{
			if (*haystack == *temp)
			{
				return haystack;
			}
			temp++;
		}

		haystack++;
	}
	return (0);
}

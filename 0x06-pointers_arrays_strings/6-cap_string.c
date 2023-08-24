#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @str: The string to be modified.
 *
 * This function capitalizes the first letter of each word in the given string.
 * It modifies the original string and returns a pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* Capitalize the first letter of the string */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}

		/* Capitalize the first letter after a space or period */
		if (str[i] == ' ' || str[i] == '.')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - ('a' - 'A');
			}
		}

		i++;
	}

	return (str);
}


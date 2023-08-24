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
		/* Capitalize the first letter after specified delimiters or at the beginning */
		if (i == 0 ||
				str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A'); /* Convert lowercase to uppercase */
			}
		}

		i++;
	}

	return (str);
}


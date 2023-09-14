#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Prints strings separated by a string.
 * @separator: The string to separate the strings.
 * @n: The number of strings to print.
 * ...
 * This function takes a variable number of strings and prints them with the
 * specified separator between them.
 *
 * Example:
 *   print_strings(", ", 3, "Hello", "World", "!");
 *   Output: "Hello, World, !\n"
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x_idx = 0;  /* Index for iterating through the strings */
	va_list x_list;          /* Variable argument list */

	va_start(x_list, n);

	while (x_idx < n)  /* Loop through strings except the last one */
	{
		printf("%s", va_arg(x_list, char*));

		if (x_idx != (n - 1) && separator != NULL) /* Check if not the last string */
			printf("%s", separator);

		x_idx++;
	}

	printf("\n");  /* Add a newline character at the end for formatting */
	va_end(x_list);
}

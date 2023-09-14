#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints integers separated by a string.
 * @separator: The string to separate the integers.
 * @n: The number of integers to print.
 * ...
 * This function takes a variable number of integers and prints them with the
 * specified separator between them.
 *
 * Example:
 *   print_numbers(", ", 3, 1, 2, 3);
 *   Output: "1, 2, 3\n"
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x_idx = 0;  /* Index for iterating through the integers */
	va_list x_list;          /* Variable argument list */

	va_start(x_list, n);

	while (x_idx < n)  /* Loop through integers except the last one */
	{
		printf("%d", va_arg(x_list, int));

		if (separator != NULL && x_idx != (n - 1))
			printf("%s", separator);

		x_idx++;
	}

	printf("\n");  /* Add a newline character at the end for formatting */
	va_end(x_list);
}

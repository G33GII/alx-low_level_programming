#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print formatted data based on a format string.
 * @format: A format string containing type specifiers:
 *           - 'c' for character
 *           - 'i' for integer
 *           - 'f' for float
 *           - 's' for string
 */

void print_all(const char * const format, ...)
{
	char *z_strings, *x_seperator = "";
	int x = 0;

	va_list x_list;

	va_start(x_list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", x_seperator, va_arg(x_list, int));
					break;
				case 'i':
					printf("%s%d", x_seperator, va_arg(x_list, int));
					break;
				case 'f':
					printf("%s%f", x_seperator, va_arg(x_list, double));
					break;
				case 's':
					z_strings = va_arg(x_list, char*);
					printf("%s%s", x_seperator, z_strings);
					if (z_strings == NULL)
						printf("%s%s", x_seperator, "(nil)");
					break;
				default:
					break;
			}
			x_seperator = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(x_list);
}

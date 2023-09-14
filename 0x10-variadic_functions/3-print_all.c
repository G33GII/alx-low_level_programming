#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print formatted data based on a format string.
 * @format: A format string containing type specifiers.
 */
void print_all(const char *const format, ...)
{
    char *z_strings;
    int x = 0;
    va_list x_list;
    int z_printed = 0; /* Track if anything has been printed. */

    va_start(x_list, format);

    if (format)
    {
        while (format[x] != '\0')
        {
            switch (format[x])
            {
                case 'c':
                    printf("%c", va_arg(x_list, int));
                    z_printed = 1; /* Mark that an argument was printed. */
                    break;

                case 'i':
                    printf("%d", va_arg(x_list, int));
                    z_printed = 1;
                    break;

                case 'f':
                    printf("%f", va_arg(x_list, double));
                    z_printed = 1;
                    break;

                case 's':
                    {
                        z_strings = va_arg(x_list, char *);
                        if (z_strings == NULL)
                        {
                            printf("(nil)");
                            break;
                        }
                        printf("%s", z_strings);
                        z_printed = 1;
                        break;
                    }

                default:
                    break;
            }

            if (format[x + 1] != '\0' && z_printed) /* Print comma if an argument was printed. */
                printf(", ");

            x++;
            z_printed = 0; /* Reset the printed flag. */
        }
    }

    printf("\n");
    va_end(x_list);
}

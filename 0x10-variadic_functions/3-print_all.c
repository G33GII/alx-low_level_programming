#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print formatted data based on a format string.
 * @format: A format string containing type specifiers.
 */
void print_all(const char * const format, ...)
{
    char *s;
    int a = 0;
    va_list quarrel;
    int printed = 0;  /* Track if anything has been printed. */

    va_start(quarrel, format);

    if (format)
    {
        while (format[a] != '\0')
        {
            switch (format[a])
            {
                case 'c':
                    printf("%c", va_arg(quarrel, int));
                    printed = 1;  /* Mark that an argument was printed. */
                    break;

                case 'i':
                    printf("%d", va_arg(quarrel, int));
                    printed = 1;
                    break;

                case 'f':
                    printf("%f", va_arg(quarrel, double));
                    printed = 1;
                    break;

                case 's':
                    {
                        s = va_arg(quarrel, char*);
                        if (s != NULL)
                        {
                            printf("%s", s);
                            printed = 1;
                        }
                        else
                        {
                            printf("(nil)");
                            printed = 1;
                        }
                        break;
                    }

                default:
                    break;
            }
            
            if (format[a + 1] != '\0' && printed)  /* Print comma if an argument was printed. */
                printf(", ");
                
            a++;
            printed = 0;  /* Reset the printed flag. */
        }
    }

    printf("\n");
    va_end(quarrel);
}

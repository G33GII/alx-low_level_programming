#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h> // Include for exit()

/**
 * main - Entry point for a simple calculator program
 * @argc: Argument count.
 * @argv: Argument Vector.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int num1, num2;
    char *operator;
    int (*x_p[5])(int, int);
    int (*z_func)(int, int);

    operator = "+-*/%";

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    if (argv == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    if (strchr(operator, argv[2][0]) == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
    {
        printf("Error\n");
        exit(100);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    x_p[0] = op_add;
    x_p[1] = op_sub;
    x_p[2] = op_mul;
    x_p[3] = op_div;
    x_p[4] = op_mod;

    z_func = get_op_func(argv[2]);

    if (z_func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    printf("%d\n", z_func(num1, num2));

    return (0);
}

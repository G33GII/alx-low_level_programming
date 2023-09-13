#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program to print the hexadecimal representation of its own bytecode.
 * @argc: The number of command-line arguments.
 * @argv: An x_rray of pointers to the arguments.
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
    int x_byt, x;
    char *x_rr;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    x_byt = atoi(argv[1]);

    if (x_byt < 0)
    {
        printf("Error\n");
        exit(2);
    }

    x_rr = (char *)main;

    for (x = 0; x < x_byt; x++)
    {
        if (x == x_byt - 1)
        {
            printf("%02hhx\n", x_rr[x]);
            break;
        }
        printf("%02hhx ", x_rr[x]);
    }
    return (0);
}

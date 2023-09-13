#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * 
 * 
 * 
 * 
*/

int _isdigit(char **x_str, int n_argc)
{
    int i, j;

    for (i = 1; i < n_argc; i++)
    {
        for (j = 0; x_str[i][j] != '\0'; j++)
        {
            if (!isdigit(x_str[i][j]))
            {
                return (1);
            }
        }
    }
    return (0);
}


int main(int argc, char *argv[])
{
    int i = 1;
    int j = 0;
    int isdig;
    size_t mul;
    char *num1;
    char *num2;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    isdig = _isdigit(argv, argc);
    if (isdig == 1)
    {
        printf("Error\n");
        exit(98);
    }

    
    //num1 = atoi(argv[1]);
    //num2 = atoi(argv[2]);
    strcpy(num1, argv[1]);
    strcpy(num2, argv[2]);

    for (; num1[i] != '\0'; i++)
        printf("%d", num1[i]);






    return (0);
}
#include "main.h"

/**
 * main -
 * @argc:
 * @argv:
 * Return:
*/
int main (int argc, char *argv[])
{
    FILE *frm, *ft;
    char c;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: cp file_from file_to\n");
        exit (97);
    }

    frm = fopen(argv[1], "r");
    ft = fopen(argv[2], "w");


    if (frm == NULL || ft == NULL)
        return (-1);


    while ((c = fgetc(frm)) != EOF)
        fputc (c, ft);


    fclose(frm);
    fclose(ft);
    return (0);   
}

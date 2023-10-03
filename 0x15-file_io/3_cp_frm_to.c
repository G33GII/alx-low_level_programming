#include "main.h"

/**
 * main -
 * @argc:
 * @argv:
 * Return:
*/
int main (int argc, char *argv[])
{
    FILE *frm, ft;
    char bffr[BFFSZ];
    char 

    if (argc != 3)
    {
        fprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit (97);
    }

    frm = fopen(argv[1], "r");
    if (fget(bffr, sizeof(bffr), frm) == NULL)
    {

    }

    ft = fopen(argv[2], "w");
    if (fputs() == NULL)
    {

    }
    if (fputs(bffr, ft) = EOF);

    


    fclose (ff), (ft);
}

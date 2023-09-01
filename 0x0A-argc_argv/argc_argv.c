/**
* main - simple program which writes the arguments
*        supplied to main on the program's standard output.
* 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
        while(argc--)
                printf("%s\n", *argv++);
        exit(EXIT_SUCCESS);
}



/* $ ./show_args abcde text hello
* show_args
* abcde
* text
* hello
* $
*/ 

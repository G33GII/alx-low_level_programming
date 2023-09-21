#include "lists.h"

void first(void) __attribute__ ((constructor));
/**
 * first - Print two lines of text to the standard output.
 * 
 * This function prints the following two lines:
 * 1. "You're beat! and yet, you must allow,"
 * 2. "I bore my house upon my back!"
 */
void first(void)
{

    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");

}

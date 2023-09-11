#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *
 * This function prints the name of the current source file (__FILE__) using
 * the printf function and returns 0 to indicate successful execution.
 *
 * Return: 0 to indicate successful execution.
 */
int main(void)
{
	printf("%s\n", __FILE__);  /* Print the name of the current source file. */
	return (0);              /* Return 0 to indicate successful execution. */
}

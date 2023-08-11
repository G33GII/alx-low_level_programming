/* Head section */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints the lowercase alphabet in reversee
 * Return: 0
 */
int main(void)
{
/* Write a program that prints the lowercase alphabet in reverse */
	char alp = 122;

	while (alp > 96)
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}

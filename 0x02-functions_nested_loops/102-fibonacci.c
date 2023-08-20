#include <stdio.h>
/**
 * main - This code prints out the first 50 fibonacci numbers
 *
 * Return: 0 Always.
 *
 */

int main(void)
{
	int i;
	long f_0 = 1;
	long f_1 = 2;
	long add;

	printf("1, 2");
	for (i = 0; i < 48; i++)
	{
		add = f_0 + f_1;
		printf(", %li", add);

		f_0 = f_1;
		f_1 = add;
	}
	printf("\n");
	return (0);
}

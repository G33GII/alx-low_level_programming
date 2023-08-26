#include <stdio.h>

/**
 *
 *
 *
 * */

int main (void)
{
	int m, n;
	long f_1 = 1;
	long f_2 = 2;
	long sum = 0;

	printf ("%li, %li", f_1, f_2);

	for (m = 0; sum <= 4000000; m++)
	{
		sum = f_1 + f_2;

		f_1 = f_2;
		f_2 = sum;

		if (sum % 2 == 0)
			printf (", %li", sum);

	}
	return (0);


}

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - funtion defination that does the magic
 * @neck: input value to the functioin
 * Return: 1 or 0
 */

void print_to_98(int neck)
{
	int nick;
	int ajack;


	if (neck <= 98)
	{
		for (nick = neck; nick <= 98; nick++)
		{
			if (nick != 98)
				printf("%d, ", nick);
			else if (nick == 98)
				printf("%d\n", nick);
		}
	} else if (neck >= 98)
	{
		for (ajack = neck; ajack >= 98; ajack--)
		{
			if (ajack != 98)
				printf("%d, ", ajack);
			else if (ajack == 98)
				printf("%d\n", ajack);
		}
	}
}



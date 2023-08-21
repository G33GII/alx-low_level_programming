#include <stdio.h>
#include "main.h"
/**
* _strcpy - function name
* @dest: destination
* @src: source
* Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	char *o_d = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (o_d);
}

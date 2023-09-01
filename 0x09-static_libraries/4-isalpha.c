#include "main.h"

/**
 * _isalpha - check if character is alphabetic
 * @c: character to check
 * Return: 1 if 'c' is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

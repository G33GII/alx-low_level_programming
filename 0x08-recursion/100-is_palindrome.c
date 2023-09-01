#include "main.h"
/**
* _strlen_recursion - calculate the length of a string recursively
* @s: input string
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
/* B c: If the current character is the null terminator, the length is 0 */
	if (*s == '\0')
		return (0);
/* Recursively calculate */
/* the length of the string by moving to the next character */
	return (1 + _strlen_recursion(s + 1));
}
/**
* check_pal - Function to check if a substring is a palindrome
* @s: input string
* @c: input integer
* @length: int length from _strlen_recursion
* Return: 0 if false and 1 if true.
*/
int check_pal(char *s, int c, int length)
{
/* Check if characters at positions i and len - 1 are equal */
	if (*(s + c) != *(s + length - 1))
		return (0); /* Not a palindrome */

/* If i is greater than or equal to len, all characters have been checked */
	if (c >= length)
		return (1); /* Palindrome */
/* Recursive call to check the next characters in the substring */
	return (check_pal(s, c + 1, length - 1));
}
/**
* is_palindrome - Function to check if a whole string is a palindrome
* @s: input string
* Return: The length of the string.
*/
int is_palindrome(char *s)
{
/* If it is a null terminator, the string is a palindrome */
	if (*s == 0)
		return (1);
/* Call check_pal function to check if the whole string is a palindrome */
	return (check_pal(s, 0, _strlen_recursion(s)));
}


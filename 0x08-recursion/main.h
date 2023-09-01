#ifndef MAIN_H
#define MAIN_H

/* Declaration of a function that prints a character */
int _putchar(char c);

/* Declaration of a function that prints a string using recursion */
void _puts_recursion(char *s);

/* Declaration of a function that prints a string in reverse using recursion */
void _print_rev_recursion(char *s);

/* Declaration of a function that calculates the length of a string using recursion */
int _strlen_recursion(char *s);

/* Declaration of a function that calculates the factorial of a number */
int factorial(int n);

/* Declaration of a function that calculates x raised to the power of y using recursion */
int _pow_recursion(int x, int y);

/* Declaration of a function that calculates the square root of a number using recursion */
int _sqrt_recursion(int n);

/* Declaration of a function that checks if a number is prime */
int is_prime_number(int n);

/* Declaration of a function that checks if a string is a palindrome */
int is_palindrome(char *s);

#endif

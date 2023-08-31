#include "main.h"
/**
 * prime - Helper function to check if a number is prime recursively.
 * @n: The number to be checked for primality.
 * @f: The factor being tested.
 *
 * This function recursively checks if a given number 'n' is prime by
 * dividing it by increasing factors starting from 'f'. If any factor
 * is found, the number is not prime.
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int prime(int n, int f)
{
    if (n == f || n == 2 || n == 3)
        return (1);
    if (n % f == 0)
        return (0);
    return (prime(n, f + 1));
}

/**
 * is_prime_number - Main function to check if a number is prime.
 * @n: The number to be checked for primality.
 *
 * This function returns 1 if the given number 'n' is a prime number,
 * and 0 if it's not.
 * It handles special cases (negative, 0, and 1),
 * and then calls the 'prime' helper
 * function to perform the primality 
 * check recursively starting from factor 2.
 */
int is_prime_number(int n)
{
    if (n < 0 || n == 0 || n == 1)
        return (0);
    return (prime(n, 2));    
}

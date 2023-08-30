# 0x08. C - Recursion

In this project, we delve into the concept of recursion in the C programming language. Recursion is a powerful technique where a function calls itself in order to solve a problem. This approach can be especially useful for solving problems that can be broken down into smaller, similar subproblems.

## Files

* **0-puts_recursion.c:** This file contains a function `\_puts_recursion` that prints a string followed by a new line using recursion.

* **1-print_rev_recursion.c:** This file contains a function `\_print_rev_recursion` that prints a string in reverse using recursion.

* **2-strlen_recursion.c:** This file contains a function `\_strlen_recursion` that returns the length of a string using recursion.

* **3-factorial.c:** This file contains a function `factorial` that calculates the factorial of a given number using recursion.

* **4-pow_recursion.c:** This file contains a function `\_pow_recursion` that calculates the value of `x` raised to the power of `y` using recursion.

* **5-sqrt_recursion.c:** This file contains a function `\_sqrt_recursion` that calculates the natural square root of a number using recursion.

* **6-is_prime_number.c:** This file contains a function `is_prime_number` that checks if a given number is a prime number using recursion.

* **7-is_palindrome.c:** This file contains a function `is_palindrome` that checks if a string is a palindrome using recursion.

## Usage

1. To compile the C files, use the following syntax:
   ```sh
   gcc -Wall -Werror -Wextra -pedantic *.c -o executable_name



========================================

#include "holberton.h"

int main(void)
{
    char *str = "Recursion is fascinating!";
    
    _puts_recursion(str); /* Output: "Recursion is fascinating!\n" */
    
    return 0;
}

==============================================


This README provides an overview of the project, the purpose of each file, how to compile and execute the code, an example usage, and additional resources for learning more about recursion in C.


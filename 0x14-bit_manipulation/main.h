#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <limits.h>  /* for CHAR_BIT */


int _putchar(char a);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif  /*  End of if statement  */

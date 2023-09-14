# 0x10-variadic_functions

## Description
This repository contains C programs that demonstrate the use of variadic functions in C programming. Variadic functions are functions in C that can accept a variable number of arguments. They are particularly useful when you want to create functions with a flexible number of inputs, such as printf in the standard library.

## Contents
The repository contains the following files:

1. **variadic_functions.h**: This header file contains the function prototypes for the variadic functions used in the programs.
2. **0-sum_them_all.c**: This program demonstrates a simple variadic function that calculates the sum of its variable number of integer arguments.
3. **1-print_numbers.c**: This program showcases a variadic function that prints a variable number of integers.
4. **2-print_strings.c**: This program demonstrates a variadic function that prints a variable number of strings.
5. **3-print_all.c**: This program utilizes a variadic function to print various types of data (integers, floats, characters, and strings) based on a format string.
6. **100-hello_holberton.asm**: This is an assembly program that prints "Hello, Holberton" using variadic functions.

## Usage
You can compile the C programs using a C compiler like GCC:

```shell
gcc -Wall -Werror -Wextra -pedantic <program_name>.c -o <program_name>

nasm -f elf64 100-hello_holberton.asm -o hello_holberton.o
gcc -no-pie hello_holberton.o -o hello_holberton

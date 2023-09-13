# Function Pointers in C (0x0F-function_pointers)

## Overview

This repository explores the concept of function pointers in the C programming language. Function pointers are a powerful and advanced feature of C that allow you to treat functions as data, making it possible to write more flexible and extensible code.

In this repository, you will find explanations, code examples, and practical use cases for function pointers in C.

## Table of Contents

- [What Are Function Pointers?](#what-are-function-pointers)
- [How to Declare Function Pointers](#how-to-declare-function-pointers)
- [Using Function Pointers](#using-function-pointers)
- [Practical Examples](#practical-examples)
- [Contributing](#contributing)
- [License](#license)

## What Are Function Pointers?

Function pointers in C are pointers that point to the address of a function. They allow you to store and manipulate functions as data, enabling dynamic function dispatch, callbacks, and more.

## How to Declare Function Pointers

Declaring a function pointer involves specifying the function's signature (return type and parameter types) that it can point to. Here's a basic syntax:

```c
return_type (*function_pointer_name)(parameter_types);

int (*add)(int, int);
`
## Using Function Pointers

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*operation)(int, int);

    // Point to the 'add' function
    operation = add;
    printf("Result: %d\n", operation(5, 3)); // Output: 8

    // Point to the 'subtract' function
    operation = subtract;
    printf("Result: %d\n", operation(5, 3)); // Output: 2

    return 0;
}

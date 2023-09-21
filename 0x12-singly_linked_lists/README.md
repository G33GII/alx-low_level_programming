# 0x12. C - Singly Linked Lists

## Description
This project is a collection of C programs that demonstrate the implementation and usage of singly linked lists. Singly linked lists are a fundamental data structure in computer science and are widely used for managing and organizing data in a linear fashion.

## Table of Contents
- [Introduction](#introduction)
- [Usage](#usage)
- [File Descriptions](#file-descriptions)
- [Compile and Run](#compile-and-run)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Introduction
A singly linked list is a linear data structure consisting of nodes, where each node contains data and a reference (pointer) to the next node in the list. Singly linked lists are versatile and can be used for various applications, such as dynamic memory allocation, data storage, and algorithm implementations.

This project provides a collection of C programs that cover the following topics related to singly linked lists:
- Creating and initializing linked lists
- Adding and removing elements from a list
- Traversing and printing the elements
- Finding specific elements or performing operations on the list
- Memory management and freeing allocated resources

## Usage
To use these programs, you can clone this repository and explore the individual C files. Each file corresponds to a specific topic or operation related to singly linked lists. You can compile and run the programs to observe their behavior and understand how to work with singly linked lists in C.

## File Descriptions
Here is a brief description of each C file in the project:

- `0-print_list.c`: Function to print all the elements of a linked list.
- `1-list_len.c`: Function to count the number of elements in a linked list.
- `2-add_node.c`: Function to add a new node at the beginning of a linked list.
- `3-add_node_end.c`: Function to add a new node at the end of a linked list.
- `4-free_list.c`: Function to free the memory occupied by a linked list.
- `100-first.c`: Demonstrates the concept of the constructor attribute in C.
- `101-hello_holberton.asm`: Assembly code to print "Hello, Holberton" using Intel syntax.

## Compile and Run
You can compile the C files using your preferred C compiler, such as `gcc`, and execute the resulting binary. For example:

```bash
gcc -Wall -Wextra -pedantic -Werror -o my_program my_program.c
./my_program

`c
#include "lists.h"

int main(void) {
    list_t *head = NULL;

    add_node(&head, "Hello");
    add_node(&head, "World");

    print_list(head);

    free_list(head);

    return (0);
}


Contributing
Contributions to this project are welcome. If you have improvements, bug fixes, or new features to add, please create a pull request. For major changes, please open an issue first to discuss the changes.


You can customize this README to include specific details about your project, provide examples of usage, and explain any additional functionality or features related to your singly linked list project.


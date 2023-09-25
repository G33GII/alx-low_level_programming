# 0x13-more_singly_linked_lists

This repository contains C programs that demonstrate the implementation of more operations and functions for singly linked lists. The singly linked list is a fundamental data structure in computer science, and this project provides additional functionality to manipulate and work with linked lists.

## Contents

- **0-print_listint.c**: A function that prints all the elements of a linked list of integers.

- **1-listint_len.c**: A function that returns the number of elements in a linked list of integers.

- **2-add_nodeint.c**: A function that adds a new node at the beginning of a linked list of integers.

- **3-add_nodeint_end.c**: A function that adds a new node at the end of a linked list of integers.

- **4-free_listint.c**: A function that frees a linked list of integers.

- **5-free_listint2.c**: A function that frees a linked list of integers and sets the head to NULL.

- **6-pop_listint.c**: A function that deletes the head node of a linked list of integers and returns the head node's data.

- **7-get_nodeint.c**: A function that returns the nth node of a linked list of integers.

- **8-sum_listint.c**: A function that returns the sum of all the data (integer values) in a linked list of integers.

- **9-insert_nodeint.c**: A function that inserts a new node at a given position in a linked list of integers.

- **10-delete_nodeint.c**: A function that deletes a node at a given position in a linked list of integers.

- **100-reverse_listint.c**: A function that reverses a linked list of integers.

- **101-print_listint_safe.c**: A function that prints a linked list with a loop.

- **102-free_listint_safe.c**: A function that frees a linked list with a loop.

- **103-find_loop.c**: A function that finds the loop in a linked list.

## Usage

To use these functions and programs, you can include the necessary header files and compile the C files with your own code. Make sure to link against the object files or libraries generated from these source files.

For example, you can compile a program that uses these functions as follows:

```bash
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0x13-more_singly_linked_lists/0-print_listint.c -o my_program

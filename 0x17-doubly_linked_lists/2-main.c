#include "lists.h"

/**
 * main - check the code
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;

    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}

/**
 * Write a function that adds a new node at the beginning of a dlistint_t list.
 * Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
 * Return: the address of the new element, or NULL if it failed
*/

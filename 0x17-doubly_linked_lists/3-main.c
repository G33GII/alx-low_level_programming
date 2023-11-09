#include "lists.h"

/**
 * main - check the code
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}

/**
 *
 * Write a function that adds a new node at the end of a dlistint_t list.
 *
 * Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
 * Return: the address of the new element, or NULL if it failed
*/

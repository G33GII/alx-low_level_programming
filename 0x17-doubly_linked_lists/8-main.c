#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}


/**
 * Write a function that deletes the node at index index of a dlistint_t linked list.
 * Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
 * where index is the index of the node that should be deleted. Index starts at 0
 * Returns: 1 if it succeeded, -1 if it failed
*/

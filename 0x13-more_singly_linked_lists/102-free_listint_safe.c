#include "lists.h"

/**
 * free_listint_safe - Safely frees a listint_t linked list.
 * @head_ptr: A pointer to the pointer to the head of the list.
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **head_ptr)
{
    size_t nodes_freed = 0; /* Initialize a counter for the number of nodes freed */
    listint_t *current_node;

    /* Check if the input pointer is NULL or the list is empty */
    if (!head_ptr || !*head_ptr)
    {
        return (0);
    }

    while (*head_ptr) {
        current_node = (*head_ptr)->next; /* Store the next node temporarily */

        /* Check for a potential loop by comparing the addresses */
        if (*head_ptr <= (*head_ptr)->next)
        {
            free(*head_ptr); /* Free the current node */
            *head_ptr = NULL; /* Set the pointer to NULL to avoid further traversal */
            nodes_freed++;
            break; /* Exit the loop if a loop is detected */
        }

        free(*head_ptr); /* Free the current node */
        *head_ptr = current_node; /* Move to the next node */
        nodes_freed++;
    }
    return (nodes_freed); /* Return the number of nodes freed */
}

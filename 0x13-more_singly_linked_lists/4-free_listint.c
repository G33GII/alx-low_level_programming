#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current;  /* Pointer to the current node being freed */
	listint_t *next;     /* Pointer to the next node to be freed */

	current = head;

	/* Traverse the list and free each node */
	while (current != NULL)
	{
		next = current->next;  /* Store the next node */
		free(current);         /* Free the current node */
		current = next;        /* Move to the next node */
	}
}

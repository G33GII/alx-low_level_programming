#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 * @head: A pointer to the pointer to the head of the list.
 * Return: #Void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;  /* Pointer to the current node being freed */
	listint_t *next;     /* Pointer to the next node to be freed */

	if (head == NULL || *head == NULL)
	{
		return;  /* Handle the case of an empty list or NULL head pointer */
	}

	current = *head;

	/* Traverse the list and free each node */
	while (current != NULL)
	{
		next = current->next;  /* Store the next node */
		free(current);         /* Free the current node */
		current = next;        /* Move to the next node */
	}

	*head = NULL;  /* Set the head pointer to NULL after freeing the list */
}


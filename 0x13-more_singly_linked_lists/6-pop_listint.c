#include "lists.h"

/**
 * pop_listint - Removes the first node from a listint_t linked list.
 * @head: A pointer to the pointer to the head of the list.
 * Return: The value of the removed node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;  /* Pointer to the next node in the list */
	int removed_value = 0; /* Value of the removed node, initially 0 */

	/* Check if the list is empty */
	if (*head == NULL)
	{
		return (removed_value); /* Return 0 if the list is empty */
	}

	next_node = (*head)->next;  /* Get the next node */

	removed_value = (*head)->n; /* Get the value of the first node */

	free(*head);                /* Free the first node */

	*head = next_node;          /* Update the head to the next node */

	return (removed_value);    /* Return the value of the removed node */
}

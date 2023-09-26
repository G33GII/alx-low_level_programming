#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list in place.
 * @head: A pointer to the pointer to the head of the list.
 * Return: A pointer to the new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL; /* Pointer to the previous node */
	listint_t *nxt_node = NULL; /* Pointer to the nxt node */

	if (*head == NULL)
	{
		return (NULL); /* Return NULL if the list is empty */
	}

	while (*head != NULL)
	{
		nxt_node = (*head)->next; /* Store the nxt_node node */
		(*head)->next = prev_node; /* Reverse the nxt pointer */
		prev_node = *head;        /* Move prev to the current node */
		*head = nxt_node;        /* Move head to the nxt node */
	}

	*head = prev_node; /* Update the head to the new head of the reversed list */
	return (*head);
}

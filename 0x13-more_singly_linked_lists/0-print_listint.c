#include "lists.h"

/**
 * print_listint - Counts the number of nodes in a linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	/* Initialize node count */
	size_t node_count = 0;

	/* Check if the list is empty */
	if (h == NULL)
	{
		return (node_count);
	}

	/* Traverse through the linked list */
	while (h != NULL)
	{
		printf("%d\n", h->n);

		/* Increment the node count */
		node_count++;

		/* Move to the next node */
		h = h->next;
	}

	/* Return the node count */
	return (node_count);
}

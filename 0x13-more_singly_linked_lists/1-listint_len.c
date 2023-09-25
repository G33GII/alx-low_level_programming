#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a linked list
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	/* Initialize node counter */
	size_t node_count = 0;

	/* Check if the list is empty */
	if (h == NULL)
	{
		return (0);
	}

	/* Iterate over each node in the linked list */
	for (; h != NULL; h = h->next, node_count++)
	{
		if (node_count == SIZE_MAX)
		{
			return (node_count);
		}
	}

	/* Return the node count */
	return (node_count);
}

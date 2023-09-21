#include "lists.h"

/**
 * list_len - Count the number of elements in a linked list.
 * @h: A pointer to the list_t list to count.
 *
 * This function counts the number of nodes (elements) in a singly linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t num_nodes = 0; /* Initialize a variable to count nodes */

	while (h)
	{
		/* Iterate through the list while the current node is not NULL */
		num_nodes++; /* Increment the node count */
		h = h->next; /* Move to the next node */
	}

	return (num_nodes); /* Return the total number of nodes */
}

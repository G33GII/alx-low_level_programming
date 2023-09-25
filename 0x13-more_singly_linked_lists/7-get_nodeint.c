#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a given index in a listint_t list
 * @head: A pointer to the head of the list.
 * @index: The index of the node to retrieve.
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = NULL;  /* Pointer to the current node */
	unsigned int node_count = 0;     /* Counter for the current node index */

	/* Check if the list is empty */
	if (head == NULL)
	{
		return (NULL);
	}

	current_node = head;

	/* Traverse the list until the desired index is reached */
	while (node_count < index)
	{
		/* Check if we've reached the end of the list before the index */
		if (current_node == NULL)
		{
			return (NULL); /* Index is out of bounds */
		}

		current_node = current_node->next; /* Move to the next node */
		node_count++;
	}

	return (current_node); /* Return a pntr to the node at the specified index */
}

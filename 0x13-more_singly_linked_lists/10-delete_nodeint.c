#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index in a list.
 * @head: A pointer to the pointer to the head of the list.
 * @index: The index of the node to be deleted.
 * Return: 1 if successful -1 if the node at the specified index does not exist
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_shift, *previous_node;
	size_t idx = 0;

	node_shift = *head;

	if (*head == NULL)
	{
		return (-1); /* Return -1 if the list is empty */
	}

	/* Special case: Delete the first node (index 0) */
	if (index == 0)
	{
		*head = node_shift->next; /* Update the head to the next node */
		free(node_shift);         /* Free the deleted node */
		return (1);
	}

	/* Traverse the list to find the node before the desired index */
	while (idx < index - 1)
	{
		if (node_shift == NULL || node_shift->next == NULL)
		{
			return (-1); /* Return -1 if the index is out of bounds */
		}
		previous_node = node_shift;
		node_shift = node_shift->next;
		idx++;
	}

	/* Update the previous node's next pointer */
	previous_node->next = node_shift->next;
	free(node_shift);                      /* Free the deleted node */

	return (1);
}

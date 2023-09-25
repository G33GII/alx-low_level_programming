#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given index in a list.
 * @head: A pointer to the pointer to the head of the list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer value to be stored in the new node.
 * Return: A pointer to the new node if successful, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_shift, *new_node;
	size_t zdx = 0;

	node_shift = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}

	new_node->n = n;

	/* Special case: Insert at the beginning of the list (idx = 0) */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the node before the desired index */
	while (zdx < idx - 1)
	{
		if (node_shift == NULL)
		{
			free(new_node); /* Free the newly allocated node on failure */
			return (NULL);  /* Index is out of bounds */
		}
		node_shift = node_shift->next;
		zdx++;
	}

	new_node->next = node_shift->next; /* Set the new node's next pointer */
	node_shift->next = new_node;    /* Update the previous node's next pointer */

	return (new_node);
}

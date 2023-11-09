#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 *                          index of a dlistint_t linked list.
 * @h: pointer to the head of the doubly linked list
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *current = *h;
	dlistint_t *new_node = NULL;

	if (!h || !*h)
		return (-1);
	if (index == 0)
	{
		*h = current->next;
		if (*h)
			(*h)->prev = NULL;
		free(current);
		return (1);
	}

	for (; index > 0 && current; index--)
		current = current->next;

	if (!current)
		return (-1);

	new_node = current->prev;
	new_node->next = current->next;

	if (current->next)
		current->next->prev = new_node;

	free(current);

	return (1);
}

#include "lists.h"

size_t _len(const dlistint_t *h);

/**
 * insert_dnodeint_at_index - function that inserts a
 *                                 new node at a given position.
 * @h: pointer to the head of the doubly linked list
 * @idx: index at which the new node should be inserted
 * @n: data for the new node
 * Return: pointer to the newly inserted node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL;
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	/**
	 * new_node->next = NULL;
	 * new_node->prev = NULL;
	 */
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	for (; idx > 1; idx--)
	{
		if (!current)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}
	if (!current)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	if (current->next)
		current->next->prev = new_node;
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}

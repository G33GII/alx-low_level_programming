#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a
 *                                                dlistint_t linked list.
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node to return
 * Return: pointer to the node at the specified index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	return (get_dnodeint_at_index(head->next, index - 1));
}

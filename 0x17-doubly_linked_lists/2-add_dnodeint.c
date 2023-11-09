#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the
 *                              beginning of a dlistint_t list.
 * @head: ptr to the head of the doubly linked list
 * @n: value to be added to the new node
 * Return: ptr to the newly added node or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *_nw = NULL;

	_nw = malloc(sizeof(dlistint_t));
	if (!_nw)
		return (NULL);

	_nw->n = n;
	_nw->prev = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, update the tail instead of the head */
		*head = _nw;
	} else
	{
		(*head)->prev = _nw;
		_nw->next = *head;
		*head = _nw;
	}

	return (*head);
}

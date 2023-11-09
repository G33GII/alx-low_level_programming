#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at
 *                                          the end of a dlistint_t list.
 * @head: ptr to the head of the doubly linked list
 * @n: value to be added to the new node
 * Return: ptr to the newly added node or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *_nw = NULL;
	dlistint_t *_plhld = *head;

	_nw = malloc(sizeof(dlistint_t));
	if (_nw == NULL)
		return (NULL);

	_nw->n = n;
	_nw->next = NULL;

	if ((*head) == NULL)
	{
		*head = _nw;
	}
	else
	{
		while ((_plhld)->next)
			_plhld = _plhld->next;

		_plhld->next = _nw;
		_nw->prev = _plhld;
	}

	return (_nw);
}

#include "lists.h"

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
	dlistint_t *_sh = *h;
	dlistint_t *hld = NULL;
	dlistint_t *_nw = NULL;

	for  (; idx > 1; idx--)
		_sh = _sh->next;

	hld = _sh->next;
	hld->prev = NULL;
	_sh->next = NULL;
	_nw = add_dnodeint_end(&_sh, n);
	_nw->next = hld;
	hld->prev = _nw;

	return (*h);

}

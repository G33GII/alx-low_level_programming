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
	dlistint_t *_sh = *h;
	dlistint_t *hld = NULL;
	dlistint_t *_nw = NULL;
	size_t lx = 0;
	unsigned int x = 1;

	lx = _len(_sh);
	if ((idx + 1) > lx)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		add_dnodeint(&(*h), n);
		return (*h);
	}

	for  (; x < idx; x++)
		_sh = _sh->next;

	hld = _sh->next;
	hld->prev = NULL;
	_sh->next = NULL;
	_nw = add_dnodeint_end(&_sh, n);
	_nw->next = hld;
	hld->prev = _nw;

	return (*h);
}


/**
 * _len - check the code
 * @h: ptr to the head of the doubly linked list
 * Return: Always EXIT_SUCCESS.
 */
size_t _len(const dlistint_t *h)
{
	const dlistint_t *sx = h;
	int x = 0;

	for (; sx; sx = sx->next)
		x++;
	return (x);

}

#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: ptr to the head of the doubly linked list
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	for (; h; h = h->next)
		x++;

	return (x);

}

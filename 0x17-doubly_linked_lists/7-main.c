#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 0, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}

/**
 * Write a function that inserts a new node at a given position.
 * Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
 * where idx is the index of the list where the new node should be added. Index starts at 0
 * Returns: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx, do not add the new node and return NULL
 * Your files 2-add_dnodeint.c and 3-add_dnodeint_end.c will be compiled during the correction
 *
 * 
 * 
 * dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
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


*
 * _len - check the code
 * @h: ptr to the head of the doubly linked list
 * Return: Always EXIT_SUCCESS.
 *
size_t _len(const dlistint_t *h)
{
	const dlistint_t *sx = h;
	int x = 0;

	for (; sx; sx = sx->next)
		x++;
	return (x);

}
 * 
 * 
 */

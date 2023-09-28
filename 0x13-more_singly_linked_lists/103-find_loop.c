#include "lists.h"

/**
 * find_listint_loop - Finds the starting node of a loop in a linked list.
 * @head: A pointer to the head of the list.
 * Return: A pointer to the starting node of the loop,
 * or NULL if no loop is found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *_slow = head; /* Pointer that moves one step at a time */
	listint_t *_fast = head; /* Pointer that moves two steps at a time */

	/* Use Floyd's Cycle Detection Algorithm */
	while (_slow && _fast && _fast->next)
	{
		_slow = _slow->next; /* Move the slow pointer one step */
		_fast = _fast->next->next; /* Move the fast pointer two steps */

		if (_slow == _fast) /* If they meet, there is a loop */
		{
			/* Move one of the pointers to the head and start again */
			_slow = head;
			while (_slow != _fast)
			{
				_slow = _slow->next;
				_fast = _fast->next;
			}

			return (_fast); /* Return the node where the loop starts */
		}
	}

	return (NULL); /* No loop found */
}

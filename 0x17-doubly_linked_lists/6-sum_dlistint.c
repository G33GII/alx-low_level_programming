#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 *                                  (n) of a dlistint_t linked list.
 * @head: pointer to the head of the doubly linked list
 * Return: sum of all the data in the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int _sum = 0;

	if (head)
	{
		_sum += head->n;
		_sum += sum_dlistint(head->next);
	}

	return (_sum);
}

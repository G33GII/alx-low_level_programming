#include "lists.h"

/**
 * sum_listint - Computes the sum of all the integers in a listint_t list.
 * @head: A pointer to the head of the list.
 * Return: The sum of the integers in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node = head;  /* Pointer to the current node */
	int sum = 0;                    /* Initialize the sum to 0 */

	/* Check if the list is empty */
	if (head == NULL)
	{
		return (sum); /* Return 0 if the list is empty */
	}

	/* Traverse the list and accumulate the sum */
	while (current_node != NULL)
	{
		sum += current_node->n; /* Add the value of the current node to the sum */
		current_node = current_node->next; /* Move to the next node */
	}

	return (sum); /* Return the computed sum */
}

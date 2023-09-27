#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *head)
{
	size_t node_count = 0; /* Initialize a counter for the number of nodes */

	if (head == NULL)
	{
		return (0); /* Return NULL if the list is empty */
	}

	/* Traverse the list and print each node's value */
	while (head != NULL)
	{
		printf("%d\n", head->n); /* Print the value of the current node */
		head = head->next;       /* Move to the next node */
		node_count++;            /* Increment the node count */
	}

	return (node_count); /* Return the number of nodes in the list */
}

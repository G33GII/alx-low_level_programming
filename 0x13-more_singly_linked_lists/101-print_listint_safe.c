#include "lists.h"

/**
 * print_listint_safe - Prints the elements of a listint_t list safely.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0; /* Initialize a counter for the number of nodes */
	const listint_t *current = head; /* Create a current pointer for traversal */

	/* Check if the list is empty */
	if (!head)

	{
		return (node_count);
	}

	while (current)
	{                       /* Print address and value */
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++; /* Increment the node count */

		/* Check for a loop by comparing the current pointer with subsequent nodes */
		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			return (node_count);
		}

		current = current->next; /* Move to the next node */
	}

	return (node_count); /* Return the number of nodes in the list */
}

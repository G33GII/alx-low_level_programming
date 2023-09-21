#include "lists.h"

/**
 * print_list - Print all the elements of a linked list.
 * @h: A pointer to the list_t list to print.
 *
 * This function prints the elements of a singly linked list and their lengths.
 * If a node contains a NULL string, it prints "[0] (nil)".
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes;

	for (num_nodes = 0; h != NULL; num_nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (num_nodes);
}


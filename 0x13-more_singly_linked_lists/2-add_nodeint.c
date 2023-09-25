#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: Double pointer to the head of the linked list
 * @n: The integer data for the new node
 * Return: Pointer to the newly added node, or NULL if the operation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Allocate memory for the new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	/* Check if memory allocation was successful */
	if (!new_node)
	{
		return (NULL);
	}

	/* Assign data to the new node */
	new_node->n = n;

	/* Point the new node to the current head of the list */
	new_node->next = *head;

	/* Make the new node the head of the list */
	*head = new_node;

	/* Return the new node */
	return (*head);
}

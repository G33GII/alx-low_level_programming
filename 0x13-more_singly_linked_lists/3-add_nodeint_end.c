#include "lists.h"

/**
 * add_nodeint_end - Adds a new node with the value 'n' to the end of the list.
 * @head: A pointer to the pointer to the head of the list.
 * @n: The integer value to be stored in the new node.
 * Return: A pointer to the head of the updated list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;

	/* Allocate memory for the new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	/* Check if memory allocation failed */
	if (!new_node)
	{
		return (NULL);
	}

	/* Set the value of the new node and make it the last node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head of the list */
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	/* Find the current last node in the list */
	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	/* Add the new node to the end of the list */
	last_node->next = new_node;

	return (*head);
}

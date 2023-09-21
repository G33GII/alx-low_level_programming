#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a linked list.
 * @head: A double pointer to the list_t list where the new node will be added.
 * @str: The string to be stored in the new node.
 *
 * This function creates a new node with the given string and adds it to the
 * end of the linked list pointed to by 'head'.
 *
 * Return: A pointer to the newly added node,
 * or NULL if memory allocation fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int string_length = 0;

	while (str[string_length]) /* Calculate the length of the input string */
		string_length++;

	new_node = malloc(sizeof(list_t));/* Allocate memory for the new node */

	if (!new_node) /* Check if memory allocation was successful */
		return (NULL);

	new_node->str = strdup(str); /* Copy the input string to the new node */
	if (!new_node->str) /* Check if strdup was successful */
	{
		free(new_node);
		return (NULL);
	}
	/* Set the length of the new node's string */
	new_node->len = string_length;
	/* Initialize the next pointer of the new node to NULL */
	new_node->next = NULL;
	/* If the list is empty, set the head to the new node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
/* Traverse the list to find the last node */
	while (temp->next)
		temp = temp->next;
/* Make the last node point to the new node */
	temp->next = new_node;
/* Return a pointer to the newly added node */
	return (new_node);
}

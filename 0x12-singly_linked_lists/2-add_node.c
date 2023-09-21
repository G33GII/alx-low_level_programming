#include "lists.h"
/**
 * add_node - Add a new node at the beginning of a linked list.
 * @head: A double pointer to the list_t list where the new node will be added.
 * @str: The string to be stored in the new node.
 *
 * This function creates a new node with the given string and adds it to the
 * beginning of the linked list pointed to by 'head'.
 *
 * Return: A pointer to the newly added node,
 * or NULL if memory allocation fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int string_length = 0;

	/* Calculate the length of the input string */
	while (str[string_length])
		string_length++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));

	/* Check if memory allocation was successful */
	if (!new_node)
		return (NULL);

	/* Copy the input string to the new node */
	new_node->str = strdup(str);

	/* Check if strdup was successful */
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	/* Set the length of the new node's string */
	new_node->len = string_length;

	/* Make the new node point to the current head of the list */
	new_node->next = (*head);

	/* Update the head pointer to point to the new node */
	(*head) = new_node;

	/* Return a pointer to the newly added node */
	return (*head);
}

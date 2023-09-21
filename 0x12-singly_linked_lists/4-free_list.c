#include "lists.h"

/**
 * free_list - Free memory allocated for a linked list.
 * @head: A pointer to the head of the list_t list to be freed.
 *
 * This function frees the memory allocated for a linked list, including both
 * the node structures and the strings stored in the nodes.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		/* Store the next node in a temporary variable */
		temp = head->next;

		/* Free the memory allocated for the string in the current node */
		free(head->str);

		/* Free the memory allocated for the current node structure */
		free(head);

		/* Move to the next node */
		head = temp;
	}
}

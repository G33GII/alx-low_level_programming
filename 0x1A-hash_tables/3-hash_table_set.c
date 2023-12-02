#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value is the value associated with the key.
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *_nn = ht->array[index];
	hash_node_t *_nw;

	/* Create a new node */
	_nw = malloc(sizeof(hash_node_t));
	if (!_nw)
		return (0);

	/* Allocate memory and store the key */
	_nw->key = strdup(key);
	if (!_nw->key)
	{
		free(_nw);
		return (0);
	}

	/* Allocate memory and store the value */
	_nw->value = strdup(value);
	if (!_nw->value)
	{
		free(_nw->key);
		free(_nw);
		return (0);
	}

	/* Link the new node appropriately in the hash table */
	_nw->next = _nn;  /* Link new node to the current head at the index */
	_nn = _nw;  /* Update the head of the linked list at the index */

	return (1);
}

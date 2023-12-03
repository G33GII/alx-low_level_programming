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
	unsigned long int index;
	hash_node_t *_nw;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (replace_iffound(ht->array[index], key, value))
		return (1);

	_nw = malloc(sizeof(hash_node_t)); /* Create a new node */
	if (!_nw)
		return (0);

	_nw->key = strdup(key); /* Allocate memory and store the key */
	if (!_nw->key)
	{
		free(_nw);
		return (0);
	}

	_nw->value = strdup(value); /* Allocate memory and store the value */
	if (!_nw->value)
	{
		free(_nw->key);
		free(_nw);
		return (0);
	}
	/**
     * Link the new node appropriately in the hash table
     * Link new node to the current head at the index
     * Update the head of the linked list at the index
     */
	_nw->next = ht->array[index];
	ht->array[index] = _nw;

	return (1);
}

#include "hash_tables.h"

/**
 * replace_iffound - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value is the value associated with the key.
 * Return: Always EXIT_SUCCESS.
 */
int replace_iffound(hash_node_t *ht, const char *key, const char *value)
{
	hash_node_t *_p = ht;

	if (ht == NULL)
		return (0);

	while (_p)
	{
		if (!(strcmp(_p->key, key)))
		{
			free(_p->value);
			_p->value = strdup(value);
			return (1);
		}
		_p = _p->next;
	}
	return (0);
}

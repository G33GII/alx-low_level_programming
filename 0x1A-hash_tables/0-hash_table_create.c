#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 * Return: Returns a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *_nt;
	unsigned long int x = 0;

	_nt = malloc(sizeof(hash_table_t));
	if (!_nt)
		return (NULL);

	_nt->size = size;
	_nt->array = malloc(sizeof(hash_node_t *) * size);
	if (!_nt->array)
	{
		free(_nt);
		return (NULL);
	}

	for (x = 0; x < size; x++)
		_nt->array[x] = NULL;

	return (_nt);
}

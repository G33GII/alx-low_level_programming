#include "hash_tables.h"

/**
 * shash_table_delete - Frees a sorted hash table
 * @ht: Pointer to the sorted hash table to be freed
 *
 * This function deallocates memory associated with the provided sorted hash
 * table. It traverses through the hash table and frees allocated memory for
 * nodes and the table itself.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *_h = ht;
	shash_node_t *_n, *_tmp;

	if (ht == NULL)
		return;

	_n = ht->shead;
	while (_n)
	{
		_tmp = _n->snext;
		free(_n->key);
		free(_n->value);
		free(_n);
		_n = _tmp;
	}

	free(_h->array);
	free(_h);

}


/**
 * shash_table_create - Creates a sorted hash table
 * @size: Size of the hash table to be created
 * Return: Pointer to the newly created sorted hash table, or NULL on failure
 *
 * This function creates a sorted hash table with the specified size. It
 * allocates memory for the table and initializes its properties, returning a
 * pointer to the created table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		ht->array[x] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);

}


/**
 * shash_table_set - Sets a key-value pair in a sorted hash table
 * @ht: Pointer to the sorted hash table
 * @key: Pointer to the key string to be set
 * @value: Pointer to the value string to be set
 * Return: 1 on success, 0 on failure
 *
 * This function sets a key-value pair in the provided sorted hash table. It
 * creates a new node for the key-value pair or updates the value if the key
 * exists.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *_nn, *tmp;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->snext;
	}

	_nn = malloc(sizeof(shash_node_t));
	if (_nn == NULL)
	{
		free(value_copy);
		return (0);
	}
	_nn->key = strdup(key);
	if (_nn->key == NULL)
	{
		free(value_copy);
		free(_nn);
		return (0);
	}
	_nn->value = value_copy;
	_nn->next = ht->array[index];
	ht->array[index] = _nn;

	if (ht->shead == NULL)
	{
		_nn->sprev = NULL;
		_nn->snext = NULL;
		ht->shead = _nn;
		ht->stail = _nn;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		_nn->sprev = NULL;
		_nn->snext = ht->shead;
		ht->shead->sprev = _nn;
		ht->shead = _nn;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		_nn->sprev = tmp;
		_nn->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = _nn;
		else
			tmp->snext->sprev = _nn;
		tmp->snext = _nn;
	}

	return (1);

}


/**
 * shash_table_get - Retrieves the value associated with a key from a sorted hash table
 * @ht: Pointer to the sorted hash table
 * @key: Pointer to the key string to be retrieved
 * Return: Pointer to the value string associated with the key, or NULL if not found
 *
 * This function retrieves the value associated with the provided key from the
 * sorted hash table. It searches for the key in the table and returns the
 * corresponding value if found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}


/**
 * shash_table_print - Prints the contents of a sorted hash table
 * @ht: Pointer to the sorted hash table to be printed
 *
 * This function prints the contents of the provided sorted hash table in the
 * format '{'key': 'value', ...}'. It starts printing from the tail of the
 * sorted list and traverses in a descending order.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");

}


/**
 * shash_table_print_rev - Prints the contents of a sorted hash table in reverse
 * @ht: Pointer to the sorted hash table to be printed in reverse
 *
 * This function prints the contents of the provided sorted hash table in
 * reverse order. It might not have an implementation yet (stubbed with a return
 * statement).
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    (void)ht;
	return;
}

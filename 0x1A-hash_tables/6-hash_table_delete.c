#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int x = 0;
    hash_node_t *_p, *_s;

    if (!(ht->array))
    {
        return;
    }

	for (x = 0; x < ht->size; x++)
	{
		_p = ht->array[x];
		if (_p == NULL)
        {
			continue;
        }

		while (_p)
		{
            _s = _p->next;
            free(_p->key);
            free(_p->value);
            free(_p);
			_p = _s;
		}
	}
    free(ht->array);
    free(ht);
}

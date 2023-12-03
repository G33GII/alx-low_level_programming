#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table you want to look into.
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *_n;
	unsigned long int x;
	unsigned char _flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (_flag == 1)
				printf(", ");

			_n = ht->array[x];
			while (_n != NULL)
			{
				printf("'%s': '%s'", _n->key, _n->value);
				_n = _n->next;
				if (_n != NULL)
					printf(", ");
			}
			_flag = 1;
		}
	}
	printf("}\n");
}

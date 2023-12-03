#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *_p;
    unsigned long int index;

    if (ht == NULL || key == NULL)
        return (NULL);
    
    index = key_index((const unsigned char *)key, ht->size);
    _p = ht->array[index];

    while (_p)
    {
        if (!(strcmp(_p->key, key)))
            return (_p->value);

        _p = _p->next;
    }
    return (NULL);
}

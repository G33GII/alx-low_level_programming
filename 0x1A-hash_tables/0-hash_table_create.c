#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 * Return: Returns a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *_nt;
    hash_node_t *_nn ;
    unsigned long int x = 0;

    _nt = malloc(sizeof(hash_table_t));
    if (!_nt)
        return (NULL);
    _nt->size = size;
    _nt->array = NULL;

    for(x = 0; x < size; x++)
    {
        _nn = malloc(sizeof(hash_node_t));
        if (!_nn)
            return (NULL);
        _nn->next = *(_nt->array);
        *(_nt->array) = _nn;
    }
    return(_nt);
}

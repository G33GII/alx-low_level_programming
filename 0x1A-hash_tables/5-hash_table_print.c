#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table you want to look into.
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int x = 0;
    hash_node_t *_p;
    char _bff[1024];

    if (ht->array == NULL)
    {
        printf("{}\n");
        return;
    }

    for (x = 0; x < ht->size; x++)
    {
        _p = ht->array[x];
        if (_p == NULL)
            continue;

        while (_p)
        {
            strcat(_bff, "'");
            strcat(_bff, _p->key);
            strcat(_bff, "': '");
            strcat(_bff, _p->value);
            strcat(_bff, "'");
            strcat(_bff, ", ");
            _p = _p->next;
        }
    }
    strcat(_bff, "\0");
    _l = strlen(_bff);
    if (_l >= 2)
        _bff[_l - 2] = '\0';
    strcat(_bff, "\0");
    printf("{%s}\n", _bff);
}

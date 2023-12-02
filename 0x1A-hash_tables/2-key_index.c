#include "hash_tables.h"

/**
 * key_index - check the code
 * @key: (const unsigned char *) input
 * @size: (unsigned long int) inout
 * Return: unsigned long int. index for the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

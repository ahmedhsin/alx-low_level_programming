#include "hash_tables.h"
/**
 * key_index - get index of key
 * @key: string used to generate hash value
 * @size: size of hashtable
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}

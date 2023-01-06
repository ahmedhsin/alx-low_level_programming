#include "hash_tables.h"
/**
 * hash_table_create - check the code for
 * @size:size of hasht
 * Return: hash table pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (head == NULL || size == 0)
	{
		return (NULL);
	}
	head->size = size;
	head->array = malloc(sizeof(hash_node_t) * size);
	if (head->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		head->array[i] = NULL;
	}
	return (head);
}

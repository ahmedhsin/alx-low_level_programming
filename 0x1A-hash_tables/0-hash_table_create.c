#include "hash_tables.h"
/**
 * hash_table_create - check the code for
 * @size:size of hasht
 * Return: hash table pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head = malloc(sizeof(hash_table_t));

	if (head == NULL)
	{
		return (NULL);
	}
	head->array = calloc(size, sizeof(hash_node_t));
	if (head->array == NULL)
	{
		return (NULL);
	}
	return (head);
}

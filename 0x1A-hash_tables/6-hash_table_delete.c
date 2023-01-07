#include "hash_tables.h"

/**
 * hash_table_delete - del
 * @ht:head of hashtable
 * Return:void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;

	while (ht->array[i])
	{
		while (ht->array[i])
		{
			tmp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

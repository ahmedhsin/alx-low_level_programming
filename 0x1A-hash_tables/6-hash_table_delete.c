#include "hash_tables.h"

/**
 * hash_table_delete - del
 * @ht:head of hashtable
 * Return:void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *t;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			t = tmp;
			tmp = tmp->next;
			if (t->value)
				free(t->value);
			if (t->key)
				free(t->key);
			free(t);
		}
		free(tmp);
	}
	free(ht->array);
	free(ht);
}

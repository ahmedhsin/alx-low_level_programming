#include "hash_tables.h"

/**
 * hash_table_delete - del
 * @ht:head of hashtable
 * Return:void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = (hash_table_t *)ht;
	hash_node_t *tmp, *t;
	unsigned long int i;

	if (head == NULL)
	{
		return;
	}

	for (i = 0; i < head->size; i++)
	{
		tmp = head->array[i];
		while (tmp)
		{
			t = tmp;
			tmp = tmp->next;
			if (t->value)
				free(t->value);
			free(t->key);
			free(t);
		}
	}
	free(head);
}

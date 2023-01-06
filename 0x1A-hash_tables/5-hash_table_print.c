#include "hash_tables.h"

/**
 * hash_table_print - print hash
 * @ht:head of hashtable
 * Return:void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_table_t *head = (hash_table_t *)ht;
	hash_node_t *tmp;
	unsigned long int i, flag = -1;

	if (head == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < head->size; i++)
	{
		tmp = head->array[i];
		while (tmp)
		{
			flag++;
			if (flag != 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}");
}

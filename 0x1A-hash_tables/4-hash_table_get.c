#include "hash_tables.h"
/**
 * hash_table_get - retrive val
 * @ht:head of hashtable
 * @key: is key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;
	hash_table_t *head = (hash_table_t *)ht;

	if (!key || !head)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	tmp = head->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);

}

#include "hash_tables.h"
/**
 * createNode - create node
 * @key: is key
 * @val : is value
 * @next: next in coll
 * Return:Obj
*/
hash_node_t *createNode(const char *key, char *val, hash_node_t *next)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
		return (NULL);
	if (val == NULL || key == NULL)
		return (NULL);
	item->key = (char *)key;
	item->value = val;
	item->next = next;
	return (item);
}

/**
 * hash_table_set - add key
 * @ht:head of hashtable
 * @key: is key
 * @value: value assoicted with key
 * Return: state of succes (0) in case of fail else succ
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *item;
	unsigned long index;
	char *val = strdup(value);

	item = createNode(key, val, NULL);
	if (ht == NULL || val == NULL || item == NULL || ht->size == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
		return (1);
	}
	else if (!strcmp(ht->array[index]->key, key))
	{
		ht->array[index]->value = val;
		free(item);
		return (1);
	}
	else
	{
		tmp = ht->array[index];
		while (tmp->next != NULL)
		{
			if (!strcmp(tmp->key, key))
			{
				tmp->value = val;
				free(item);
				return (1);
			}
			tmp = tmp->next;
		}
		tmp = createNode(key, val, ht->array[index]);
		if (tmp == NULL)
			return (0);
		ht->array[index] = tmp;
		return (1);
	}
	return (0);
}

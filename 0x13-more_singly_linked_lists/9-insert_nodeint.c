#include "lists.h"
/**
 * insert_nodeint_at_index - print func on linkedlist
 * @head: pointer to the head of list
 * @idx: position of wanted node
 * @n: data
 * Return: numbers of nodes
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!new)
		return (NULL);
	new->n = n;
	while (tmp)
	{
		if (i - 1 == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}

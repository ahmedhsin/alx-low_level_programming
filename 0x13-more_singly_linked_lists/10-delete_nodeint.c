#include "lists.h"
/**
 * delete_nodeint_at_index - print func on linkedlist
 * @head: pointer to the head of list
 * @index: position of wanted node
 * Return: numbers of nodes
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *curr = *head;

	while (curr)
	{
		if (i == index - 1)
		{
			tmp = (curr)->next;
			(curr)->next = tmp->next;
			free(tmp);
			return (1);
		}
		curr = (curr)->next;
		i++;
	}
	return (-1);
}

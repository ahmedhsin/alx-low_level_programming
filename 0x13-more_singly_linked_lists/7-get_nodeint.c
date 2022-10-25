#include "lists.h"
/**
 * get_nodeint_at_index - print func on linkedlist
 * @head: pointer to the head of list
 * @index: position of wanted node
 * Return: numbers of nodes
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	int i = 0;

	while (current)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}

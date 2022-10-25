#include "lists.h"
/**
 * get_nodeint_at_index - print func on linkedlist
 * @head: pointer to the head of list
 * @index: position of wanted node
 * Return: numbers of nodes
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

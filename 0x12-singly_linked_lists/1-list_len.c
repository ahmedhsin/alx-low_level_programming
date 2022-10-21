#include "lists.h"
/**
 * list_len - print func on linkedlist
 * @h: pointer to the head of list
 * Return: numbers of nodes
*/
size_t list_len(const list_t *h)
{
	list_t *current = (list_t *)h;
	size_t numofnodes = 0;

	while (current)
	{
		numofnodes++;
		current = current->next;
	}
	return (numofnodes);
}

#include "lists.h"
/**
 * listint_len - print func on linkedlist
 * @h: pointer to the head of list
 * Return: numbers of nodes
*/
size_t listint_len(const listint_t *h)
{
	listint_t *current = (listint_t *)h;
	size_t numofnodes = 0;

	while (current)
	{
		numofnodes++;
		current = current->next;
	}
	return (numofnodes);
}

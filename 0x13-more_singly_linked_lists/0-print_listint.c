#include "lists.h"
/**
 * print_listint - print func on linkedlist
 * @h: pointer to the head of list
 * Return: numbers of nodes
*/
size_t print_listint(const listint_t *h)
{
	listint_t *current = (listint_t *)h;
	size_t numofnodes = 0;

	while (current)
	{

		printf("%d\n", current->n);
		numofnodes++;
		current = current->next;
	}
	return (numofnodes);
}

#include "lists.h"
/**
 * print_list - print func on linkedlist
 * @h: pointer to the head of list
 * Return: numbers of nodes
*/
size_t print_list(const list_t *h)
{
	list_t *current = (list_t *)h;
	size_t numofnodes = 0;

	while (current)
	{
		if (!current->str)
		{
			current->str = "(nil)";
			current->len = 0;
		}
		printf("[%d] %s\n", current->len, current->str);
		numofnodes++;
		current = current->next;
	}
	return (numofnodes);
}

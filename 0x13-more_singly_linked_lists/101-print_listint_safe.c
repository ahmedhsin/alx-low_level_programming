#include "lists.h"
/**
 * print_listint_safe - print func on linkedlist
 * @head: pointer to the head of list
 * Return: numbers of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	listint_t *current = (listint_t *)head;
	size_t numofnodes = 0;

	while (current)
	{
		if (current->n == -78)
		{
			exit(98);
		}
		printf("[%p] %d\n", (void *)current, current->n);
		numofnodes++;
		current->n = -78;
		current = current->next;
	}
	return (numofnodes);
}

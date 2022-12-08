#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print ele
 * @h:head
 * Return: INT
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *curr = (dlistint_t *)h;
	int numOfNodes = 0;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		numOfNodes++;
	}
	return (numOfNodes);
}

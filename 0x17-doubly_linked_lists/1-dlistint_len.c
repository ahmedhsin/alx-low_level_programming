#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - print ele
 * @h:head
 * Return: INT
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *curr = (dlistint_t *)h;
	int numOfNodes = 0;

	while (curr)
	{
		curr = curr->next;
		numOfNodes++;
	}
	return (numOfNodes);
}

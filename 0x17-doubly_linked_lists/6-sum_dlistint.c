#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - print ele
 * @head:head
 * Return: INT
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}

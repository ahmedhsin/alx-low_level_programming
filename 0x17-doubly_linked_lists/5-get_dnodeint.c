#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - print ele
 * @head:head
 * @index:index
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (head)
	{
		if (cnt == index)
			return (head);
		cnt++;
		head = head->next;
	}
	return (NULL);
}

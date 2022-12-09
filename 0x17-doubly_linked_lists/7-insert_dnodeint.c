#include "lists.h"
#include <stdio.h>
/**
 * insert_dnodeint_at_index - print ele
 * @h:head
 * @n:data
 * @idx:index
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cnt = 0;
	dlistint_t *head = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if (idx == 0)
	{
		if (head != NULL)
			new->next = head;
		head = new;
		return (new);
	}
	while (head)
	{
		if ((cnt + 1) == idx)
		{
			new->next = head->next;
			(head->next)->prev = new;
			head->next = new;
			new->prev = head;
			return (new);
		}
		head = head->next;
		cnt++;
	}
	return (NULL);
}

#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - print ele
 * @head:head
 * @n:data
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (curr->next)
		curr = curr->next;
	new->prev = curr;
	curr->next = new;
	new->next = NULL;
	return (new);
}

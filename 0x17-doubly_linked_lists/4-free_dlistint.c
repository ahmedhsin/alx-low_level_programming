#include "lists.h"
#include <stdio.h>
/**
 * free_dlistint - print ele
 * @head:head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		tmp = head->next;
		free(head->prev);
		free(head);
		head = tmp;
	}
}

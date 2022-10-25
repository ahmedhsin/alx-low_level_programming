#include "lists.h"
/**
 * pop_listint - print func on linkedlist
 * @head: pointer to the head of list
 * Return: numbers of nodes
*/
int pop_listint(listint_t **head)
{
	listint_t *next = (*head)->next;
	int n = 0;

	if (!head || !(*head))
		return (n);
	n = (*head)->n;
	free(*head);
	*head = next;
	return (n);
}

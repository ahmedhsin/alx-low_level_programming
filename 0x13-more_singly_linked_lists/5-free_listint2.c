#include "lists.h"
/**
 * free_listint2 - print func on linkedlist
 * @head: pointer to the head of list
 * Return: numbers of nodes
*/
void free_listint2(listint_t **head)
{
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		(*head) = next;
	}
	*head = NULL;
}

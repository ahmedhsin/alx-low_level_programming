#include "lists.h"
/**
 * free_listint - print func on linkedlist
 * @head: pointer to the head of list
 * Return: numbers of nodes
*/
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

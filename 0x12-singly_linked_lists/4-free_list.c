#include "lists.h"
/**
 * free_list - print func on linkedlist
 * @head: pointer to the head of list
 * Return: numbers of nodes
*/
void free_list(list_t *head)
{
	list_t *next = head;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}

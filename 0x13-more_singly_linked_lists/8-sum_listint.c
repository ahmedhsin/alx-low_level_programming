#include "lists.h"
/**
 * sum_listint - print func on linkedlist
 * @head: pointer to the head of list
 * Return: numbers of nodes
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

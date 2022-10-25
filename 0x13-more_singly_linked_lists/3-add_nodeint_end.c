#include "lists.h"
/**
 * add_nodeint_end - print func on linkedlist
 * @head: pointer to the head of list
 * @n: pointer to string
 * Return: numbers of nodeints
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = malloc(sizeof(listint_t));
	listint_t *traverse;

	if (!current)
		return (NULL);
	current->n = n;

	traverse = *head;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	while (traverse->next)
		traverse = traverse->next;
	traverse->next = current;

	return (current);
}

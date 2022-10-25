#include "lists.h"
/**
 * add_nodeint - print func on linkedlist
 * @head: pointer to the head of list
 * @n: pointer to string
 * Return: numbers of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = malloc(sizeof(listint_t));
	listint_t *tmp;

	if (!current)
		return (NULL);
	current->n = n;
	tmp = *head;
	*head = current;
	(*head)->next = tmp;
	return (*head);
}

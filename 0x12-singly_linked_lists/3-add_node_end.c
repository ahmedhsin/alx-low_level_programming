#include "lists.h"
/**
 * add_node_end - print func on linkedlist
 * @head: pointer to the head of list
 * @str: pointer to string
 * Return: numbers of nodes
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = malloc(sizeof(list_t));
	list_t *traverse;

	if (!current)
		return (NULL);
	current->str = strdup(str);
	current->len = strlen(str);

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

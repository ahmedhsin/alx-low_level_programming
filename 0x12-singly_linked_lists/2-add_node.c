#include "lists.h"
/**
 * add_node - print func on linkedlist
 * @head: pointer to the head of list
 * @str: pointer to string
 * Return: numbers of nodes
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *current = malloc(sizeof(list_t));
	list_t *tmp;

	if (!current)
		return (NULL);
	current->str = strdup(str);
	current->len = strlen(str);
	tmp = *head;
	*head = current;
	(*head)->next = tmp;
	return (*head);
}

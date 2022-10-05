#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - prints buffer in hexa
 * @ac: the address of memory to print
 * @av: the address of memory to print
 *
 * Return: Nothing.
 */

char *argstostr(int ac, char **av)
{
	int i, j, size, total = 0, curr = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		total += strlen(av[i]);
	ptr = malloc(total + ac + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		size = strlen(av[i]);
		for (j = 0; j < size; j++)
			ptr[curr++] = av[i][j];
		ptr[curr++] = '\n';
	}
	ptr[curr] = '\0';
	return (ptr);
}

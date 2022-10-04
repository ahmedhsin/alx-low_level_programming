#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	unsigned int size = strlen(str);
	char *ptr;
	unsigned int i;
	
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	return (ptr);
}

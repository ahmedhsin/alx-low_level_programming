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
	char *ptr = malloc(size);

	if (ptr == NULL || size == 0 || str == NULL)
	{
		return ('\0');
	}
	ptr = str;
	return (ptr);
}

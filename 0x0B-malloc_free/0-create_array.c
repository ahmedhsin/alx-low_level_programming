#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);
	int i;

	if (ptr == NULL || size == 0)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

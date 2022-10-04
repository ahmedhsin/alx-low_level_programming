#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the address of memory to print
 *
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2;
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = strlen(s1);
	size2 = strlen(s2);
	ptr = malloc(size1 + size2 + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < size2; j++)
		ptr[i++] = s2[j];
	return (ptr);
}

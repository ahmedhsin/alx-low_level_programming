#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the address of memory to print
 * @n: the address of memory to print
 *
 * Return: Nothing.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n >= size2)
		n = size2;
	ptr = malloc(size1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i++] = s2[j];
	ptr[i] = NULL;
	return (ptr);
}

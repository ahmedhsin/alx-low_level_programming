#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - check the code
 * @ptr:blaaaaaaaaa
 * @old_size:blaaaaaaaaa
 * @new_size:blaaaaaaaaa
 *
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	unsigned int i;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	ptr1 = malloc(new_size);
	for (i = 0; i < old_size; i++)
		ptr1[i] = ((char *)ptr)[i];
	free(ptr);
	return (ptr1);
}

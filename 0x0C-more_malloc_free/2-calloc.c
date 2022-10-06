#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - check the code
 * @nmemb:blaaaaaaaaa
 * @size:blaaaaaaaaa
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i = i + size)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}

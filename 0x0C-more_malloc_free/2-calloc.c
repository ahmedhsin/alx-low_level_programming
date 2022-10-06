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

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}

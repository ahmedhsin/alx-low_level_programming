#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code
 * @b:blaaaaaaaaa
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}

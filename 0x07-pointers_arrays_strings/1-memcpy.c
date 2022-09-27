#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * *_memcpy - check the code
 * @dest: blablalba
 * @src: blablalb
 * @n: bbbb
 * Return: void
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

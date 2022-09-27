#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * *_memset - check the code
 * @s: blablalba
 * @b: blablalb
 * @n: bbbb
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

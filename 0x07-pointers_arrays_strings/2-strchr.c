#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * *_strchr - check the code
 * @s: blablalba
 * @c: blablalb
 * Return: void
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

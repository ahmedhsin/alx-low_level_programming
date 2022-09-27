#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * *_strpbrk - check the code
 * @s: blablalba
 * @accept: blablalb
 * Return: void
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, b = 0;

	for (i = 0;  s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s[b] = s[i];
				b++;
				break;
			}
		}

	}
	s[b] = '\0';
	if (b)
		return (s);
	else
		return ('\0');
}

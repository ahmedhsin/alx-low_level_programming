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
	unsigned int i, j, cnt = 0, b = 1;

	for (i = 0;  s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				b = 1;
				cnt++;
				break;
			}
		}

	}
	if (b)
		return (cnt);
	else
		return ('\0');
}

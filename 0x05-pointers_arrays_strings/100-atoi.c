#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: blablalba
 * Return: void
 */

int _atoi(char *s)
{
	unsigned int re = 0, i, cd = 1, start = 0, pp = 0, ss = 0, sp, numz = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (!ss)
			{
				ss = 1;
				start = i;
			}
		}
		if (ss)
		{
			if (s[i] >= '0' && s[i] <= '9')
				pp++;
			else
				break;
		}
	}
	sp = pp;
	sp -= 1;
	while (sp--)
	{
		cd *= 10;
	}
	for (i = 0; i < start; i++)
	{
		if (s[i] == '-')
			numz++;
	}
	for (i = start; i < start + pp; i++)
	{
		re = re  + cd * (s[i] - '0');
		cd /= 10;
	}
	return (numz % 2 != 0 ? re : re * -1);

#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _puta - Short description, single line
 * @re: Description of parameter x
 * @numz: lololololol
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
unsigned int _puta(unsigned int re, unsigned int numz)
{
	if (numz % 2 != 0)
		return (-1 * re);
	else
		return (re);
}
/**
 * _atoi - Short description, single line
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
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
	return (_puta(re, numz));
}

#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: blablalba
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char tmp;
	int len = 0;

	for (i = 0; s[i] != '\n'; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		tmp = s[len - 1 - i];
		s[len - 1 - i] = s[i];
		s[i] = tmp;
	}

}

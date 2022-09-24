#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <string.h>
/**
 * *string_toupper - check the code
 * @s: blllll
 * Return: void
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}

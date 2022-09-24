#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - check the code
 * @s1: blablalba
 * @s2: blllll
 * Return: void
 */

int *_strcmp(char *s1, char *s2)
{
	int i;
	int ans = 0;

	for (i = 0; i < strlen(s1) && i < strlen(s2); i++)
	{
		ans += (s1[i] - s2[i]);
	}
	if (ans == 0)
	{
		return (0);
	} else if (ans > 0)
	{
		return (1);
	} else
		return (-1);
}

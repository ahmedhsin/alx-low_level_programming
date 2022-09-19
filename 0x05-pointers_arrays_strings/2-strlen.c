#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: blablalba
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;
	int cnt = 0;

	for (; s[i] != '\0'; i++)
	{
		cnt++;
	}
	return (cnt);
}

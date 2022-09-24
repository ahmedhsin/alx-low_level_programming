#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - check the code
 * @dest: blablalba
 * @src: blllll
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

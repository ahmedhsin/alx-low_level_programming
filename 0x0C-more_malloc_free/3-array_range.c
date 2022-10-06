#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * array_range - check the code
 * @min:blaaaaaaaaa
 * @max:blaaaaaaaaa
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, curr = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(4 * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ptr[curr++] = i;
	return (ptr);
}

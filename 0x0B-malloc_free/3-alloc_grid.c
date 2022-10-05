#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - prints buffer in hexa
 * @width: the address of memory to print
 * @height: the address of memory to print
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int *rows;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	rows = malloc(sizeof(int) * height);
	if (rows == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		rows[i] = malloc(sizeof(int) * width);
		if (rows[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			rows[i][j] = 0;
	}
	return (rows);
}

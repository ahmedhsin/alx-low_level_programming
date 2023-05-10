#include <stdio.h>
/**
 * linear_search - Entry point
 * @array: array to seach in
 * @size: size of array
 * @value: to search for
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int found = 0;


	if (array == NULL || size == 0)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			found = 1;
			break;
		}
	}
	if (!found)
		i = -1;
	return (i);
}

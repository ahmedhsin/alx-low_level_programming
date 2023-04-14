#include <stdio.h>

/**
 * print_array - helper function
 * @array: source array
 * @start: start of array
 * @end: end of array
 * Return: void
 */

void print_array(int *array, int start, int end)
{
	int i;

	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d", array[i]);
}

/**
 * binary_search - Entry point
 * @array: array to seach in
 * @size: size of array
 * @value: to search for
 * Return: int
 */

int binary_search(int *array, size_t size, int value)
{
	size_t s = 0, e = size - 1, mid;
	int found = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (s <= e)
	{
		mid = (s + e) / 2;
		printf("Searching in array: ");
		print_array(array, s, e);
		printf("\n");
		if (array[mid] == value)
		{
			found = 1;
			break;
		} else if(array[mid] > value)
			e = mid - 1;
		else
			s = mid + 1;
	}
	if (!found)
		mid = -1;
	return (mid);

}

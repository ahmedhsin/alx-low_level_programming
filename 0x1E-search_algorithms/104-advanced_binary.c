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

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d", array[i]);
	printf("\n");
}
/**
 * bs - recursive bs
 * @array: array to search in
 * @start: start of array
 * @end: end of array
 * @value: value to search for
 * @current: index of current
 * Return: int
 */
int bs(int *array, int start, int end, int value, int current)
{
	int mid = start + (end - start) / 2;


	if (start > end)
		return (current);

	print_array(array, start, end);

	if (array[mid] == value)
	{
		current =  mid;
		return (bs(array, start, mid - 1, value, current));
	}
	if (array[mid] > value)
		return (bs(array, start, mid - 1, value, current));
	else
		return (bs(array, mid + 1, end, value, current));
}

/**
 * advanced_binary  - Entry point
 * @array: array to seach in
 * @size: size of array
 * @value: to search for
 * Return: int
 */

int advanced_binary(int *array, size_t size, int value)
{
	return (bs(array, 0, size - 1, value, -1));

}

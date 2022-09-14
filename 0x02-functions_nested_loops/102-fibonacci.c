#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - check the code
 * Return: int
 */

int main(void)
{
	int i = 47;
	int first = 1;
	int second = 2;
	int next = 0;

	printf("%d, ", first);
	printf("%d, ", second);
	while (i--)
	{
		next = first + second;
		printf("%d, ", next);
		first = second;
		second = next;
	}
	printf("%d\n", second + first);
	return (0);
}

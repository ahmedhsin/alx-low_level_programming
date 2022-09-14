#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - check the code
 * Return: int
 */

int main(void)
{
	int i = 95;
	long int first = 1;
	long int second = 2;
	long int next = 0;

	printf("%ld, ", first);
	printf("%ld, ", second);
	while (i--)
	{
		next = first + second;
		printf("%ld, ", next);
		first = second;
		second = next;
	}
	printf("%ld\n", second + first);
	return (0);
}

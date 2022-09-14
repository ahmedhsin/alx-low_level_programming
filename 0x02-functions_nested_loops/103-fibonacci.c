#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - check the code
 * Return: int
 */

int main(void)
{
	long int first = 1;
	long int second = 2;
	long int next = 0;
	long int sum = 2;

	while (next < 4000000)
	{
		next = first + second;
		first = second;
		second = next;
		if (next % 2 == 0)
			sum = sum + next;
	}
	printf("%ld\n", sum);
	return (0);
}

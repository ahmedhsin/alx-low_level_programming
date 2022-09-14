#include "main.h"
#include <stdint.h>
#include <stdio.h>

/**
 * main - check the code
 * Return: int
 */

int main(void)
{
	int i = 95;
	int64_t first = 1;
	int64_t second = 2;
	int64_t next = 0;

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

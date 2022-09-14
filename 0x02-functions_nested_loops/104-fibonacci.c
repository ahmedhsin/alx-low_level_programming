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
	uint64_t first = 1;
	uint64_t second = 2;
	uint64_t next = 0;

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

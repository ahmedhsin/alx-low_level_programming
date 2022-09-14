#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - check the code
 * Return: int
 */

int main(void)
{
	int sum = 0;
	int i = 2;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - check the code
 * Return: void
 */
int main(void)
{
	long i = 2;
	long largest = 1;
	long  num = 612852475143;

	for (; i < num; i++)
	{
		while (num % i == 0)
		{
			if (largest < i)
				largest = i;
			num = num / i;
		}
	}
	if (num != 1)
		if (largest < num)
			largest = num;
	printf("%ld\n", largest);
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - entry point
*
* Return: Always 0
*/

int main(void)
{
	char z = 'a';
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}

	while (z <= 'f')
	{
		putchar(z);
		z++;
	}
		putchar('\n');

	return (0);
}

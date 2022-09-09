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
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	char z = 'A';

	while (z <= 'Z')
	{
		putchar(z);
		z++;
	}
		putchar('\n');

	return (0);
}

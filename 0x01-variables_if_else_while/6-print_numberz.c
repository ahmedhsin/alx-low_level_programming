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
	int x = 48;

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
		putchar('\n');

	return (0);
}

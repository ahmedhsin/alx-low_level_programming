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
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
		putchar('\n');

	return (0);
}

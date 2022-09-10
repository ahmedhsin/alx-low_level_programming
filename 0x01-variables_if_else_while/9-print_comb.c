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

	while (x <= '8')
	{
		putchar(x);
    putchar(", ");
		x++;
	}
		putchar("9\n");

	return (0);
}

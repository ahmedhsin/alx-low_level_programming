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
		if (x != 'q' and x != 'e')
		{
			putchar(x);
		}

		x++;
	}
		putchar('\n');

	return (0);
}

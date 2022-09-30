#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - entry point
*
* @argc:blaaaaa
* @argv:blaaaaaa
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int total, tcoin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		total = atoi(argv[1]);
		if (total >= 25)
		{
			tcoin += total / 25;
			total = total % 25;
		}
		if (total >= 10)
		{
			tcoin += total / 10;
			total = total % 10;
		}
		if (total >= 5)
		{
			tcoin += total / 5;
			total = total % 5;
		}
		if (total >= 2)
		{
			tcoin += total / 2;
			total = total % 2;
		}
		printf("%d\n", tcoin + total);

	}
	return (0);
}

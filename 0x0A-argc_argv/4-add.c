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
	int i, j;
	int sum = 0, len;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			len  = strlen(argv[i]);
			for (j = 0; j < len; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
/**
* main - entry point
*
* @argc:blaaaaa
* @argv:blaaaaaa
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

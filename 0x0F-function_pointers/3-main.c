#include "3-calc.h"
/**
 * main - check the code
 * @argc: lool
 * @argv: pointer
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int ans;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	ans = f(atoi(argv[1]), atoi(argv[3]));
	if (ans == INT_MAX)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", ans);
	return (0);
}

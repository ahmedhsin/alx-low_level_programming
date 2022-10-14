#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @n:ll
 * @separator:ll
 * @...: var
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list arg;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(arg, n);
	x = va_arg(arg, char *);
	if (x == NULL)
		x = "(nil)";
	printf("%s", x);
	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(arg, char *);
		if (x == NULL)
			x = "(nil)";
		if (separator != NULL)
			printf("%s%s", separator, x);
		else
			printf("%s", x);
	}
	printf("\n");
}

#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @n:ll
 * @separator:ll
 * @...: var
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	if (n == 0)
		return;
	if (separator == NULL)
		separator = " ";
	va_start(arg, n);
	printf("%d", va_arg(arg, int));
	for (i = 0; i < n - 1; i++)
		printf("%s%d", separator, va_arg(arg, int));
}

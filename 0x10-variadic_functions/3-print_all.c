#include "variadic_functions.h"

/**
 * print_all - check the code
 * @format:ll
 * @...: var
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *x, *se = "";
	va_list arg;

	va_start(arg, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%s", se, va_arg(arg, char *));
			break;
			case 'i':
				printf("%s%d", se, va_arg(arg, int));
			break;
			case 'f':
				printf("%s%f", se, va_arg(arg, double));
			break;
			case 's':
				x = va_arg(arg, char *);
				if (x == NULL)
					x = "(nil)";
				printf("%s%s", se, x);
			break;
		}
		se = ", ";
		i++;
	}
	printf("\n");
}

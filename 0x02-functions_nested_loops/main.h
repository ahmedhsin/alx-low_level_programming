#include <stdio.h>

/**
 * _putchar - prototype.
 * print_alphabet - print a..z
 * Return: nothing.
 */

int _putchar(char c);
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

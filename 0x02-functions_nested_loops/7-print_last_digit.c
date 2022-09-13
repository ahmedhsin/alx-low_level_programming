#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_last_digit - check the code
 * @c: char to be checked
 * Return: 0 or 1 depend on code
 */

int print_last_digit(int c)
{

	if (c < 0)
		c = c * -1;
  _putchar(c % 10 + '0');
  return (c % 10);
}

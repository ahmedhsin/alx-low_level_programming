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
	int val;
	
	if (c < 0)
		c = c * -1;
	val = (c % 10) + 10 * (c % 10);
	return (val);
}

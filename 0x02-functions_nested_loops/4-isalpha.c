#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha - check the code
 * @c: char to be checked
 * Return: 0 or 1 depend on code
 */

int _isalpha(int c)
{
	int is = isalpha(c);

	if (is)
		return (1);
	return (0);
}

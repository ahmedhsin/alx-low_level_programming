#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _abs - check the code
 * @c: char to be checked
 * Return: 0 or 1 depend on code
 */

int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}

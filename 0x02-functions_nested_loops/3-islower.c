#include "main.h"

/**
 * _islower - check the code
 * @c: char to be checked
 * Return: 0 or 1 depend on code
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

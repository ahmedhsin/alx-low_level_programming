#include "main.h"
/**
 * binary_to_uint - check the code
 * @b: blablalba
 * Return: void
 */

unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	char *curr = malloc(len + 1);
	int i = 0;
	unsigned int ans = 0;

	if (!b)
		return (0);
	strcpy(curr, b);
	for (i = 0; i < len; i++)
	{
		curr[i] = b[len - 1 - i];
	}
	i = 0;
	while (curr[i])
	{
		if (curr[i] == '1')
			ans += pow(2, i);
		i++;
	}
	return (ans);

}

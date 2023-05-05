#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string (0 - 1)
 * Return: converted numb
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int var = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		var = var * 2 + (*b++ - '0');
	}
	return (var);
}


#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets a bit index to 1
 * @n:  integer
 * @index:index to be changes
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 64)
		return (-1);

	mask = 1 << index;

	*n = *n | mask;
	return (1);
}


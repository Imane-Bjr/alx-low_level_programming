#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to the num
 * @index: index to the bit
 * Return: 1 when success, -1 when failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	val = sizeof(n) * 8;
	if (index > val)
		return (-1);
	*n |= (1 << index);
	return (1);
}


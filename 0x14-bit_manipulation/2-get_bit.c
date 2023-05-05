#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to get bit
 * @index: index of the bit to get
 * Return: valur of bit at index, -1 when error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int val;

	val = sizeof(n) * 8;
	if (index > val)
		return (-1);

	return ((n >> index) & 1);
}


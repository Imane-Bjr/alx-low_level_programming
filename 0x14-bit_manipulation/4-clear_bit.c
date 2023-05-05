#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number for i
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int compt, val;

	val = sizeof(unsigned long int) * 8 - 1;
	if (index > val)
		return (-1);
	compt = ~(1 << index);
	*n = *n & compt;

	return (1);
}


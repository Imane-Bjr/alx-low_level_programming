#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first num
 * @m: second num
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, j;
	unsigned long int val, res, num;

	val = sizeof(unsigned long int) * 8;
	j = 0;
	res = 1;
	num = n ^ m;

	for (i = 0; i < val; i++)
	{
		if (res == (num & res))
			j++;
		res <<= 1;
	}
	return (j);
}


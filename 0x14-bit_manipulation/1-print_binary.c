#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n:: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int compt = 0;
	int i;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			compt++;
		}
		else if (compt)
			_putchar('0');
	}
	if (!compt)
		_putchar('0');
}


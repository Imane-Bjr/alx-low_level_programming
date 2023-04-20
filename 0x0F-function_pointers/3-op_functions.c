#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * op_add - sum of a and b
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of a and b
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of a and b
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - result of the division of a by b
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder of the division of a by b
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


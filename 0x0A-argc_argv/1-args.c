#include <stdio.h>
/**
 * main - print the number of arguments passed into it.
 * @argc: nimber of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

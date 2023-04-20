#include "3-calc.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: ..
 * Return: int
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	oper = argv[2];

	if (get_op_func(oper) == NULL || oper[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oper == 47 || *oper == 37) && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(oper)(n1, n2));

	return (0);
}

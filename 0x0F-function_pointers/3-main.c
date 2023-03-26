#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calculator which prints the value for two int values in an addition,
 * subtraction, division, multiplication or modulus operation or Error.
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 if succesful, 98 if wrong argument number, 99 if wrong operator
 * and 100 if error is from using 0 for a divide or modulus operation.
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *s;
	int (*op_p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	if ((*s == '/' || *s == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
		return (100);
	}
	op_p = get_op_func(s);
	if (op_p == NULL)
	{
		printf("Error\n");
		exit(99);
		return (99);
	}
	printf("%d\n", (op_p(a, b)));
	return (0);
}

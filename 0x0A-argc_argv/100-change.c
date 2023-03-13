#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins as change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if runs corretly and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int amount;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	while (amount > 0)
	{
		if (amount > 24)
			amount -= 25;
		else if (amount > 9)
			amount -= 10;
		else if (amount > 4)
			amount -= 5;
		else if (amount > 1)
			amount -= 2;
		else
			amount -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints out if a random number is positive, zero or neutral
 *
 * Return: returns 0 if function runs with no errors
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if statement to test for positivity or nagativity of n value */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

#include <stdio.h>

/**
 * main - prints number 1 to 100 replacing multiples of 3 with Fizz, 5 with Buzz and FizzBuzz for multiples of 3 and 5.
 *
 * Return: 0 if it executes with no error
 */
int main(void)
{
	int a;
	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

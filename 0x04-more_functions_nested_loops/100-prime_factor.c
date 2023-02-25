#include <stdio.h>

/**
 * is_prime - checks is a given number is prime
 * @n: number to be checked
 *
 * Return: 1 if true and 0 if false
 */
int is_prime(long int n)
{
	long int i = 2;

	while (i < n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0 if function executes with no error
 */
int main(void)
{
	int i = 2;
	long int big = 0;
	long int num = 612852475143;

	while (1)
	{
		if (is_prime(i))
		{
			while (1)
			{
				if (num % i == 0)
					num /= i;
				else
					break;
				if (num == 0)
				{
					big = i;
					break;
				}
			}
			if (is_prime(num))
				big = num;
		}
		if (big != 0)
			break;
		i++;
	}
	printf("%ld\n", big);
	return (0);
}

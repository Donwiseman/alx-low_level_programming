#include <stdlib.h>
#include "main.h"

/**
 * print_number - prints an integer to the stdout
 * @n: integer to be printed
 */
void print_number(unsigned long int n)
{
	unsigned int lastn;

	/*check if negative*/
	if (n < 0)
	{
		_putchar('-');
	}
	/*get last digit and remainder as absolute value*/
	lastn = (n % 10);
	n = (n / 10);
	/*use recursion if remainder value is not zero*/
	if (n != 0)
	{
		print_number(n);
	}
	_putchar(48 + lastn);
}

/**
 * ten_power - returns the value of 10 raised to n power
 * @n: power to be raised to
 *
 * Return: value of 10 raised to power n
 */
unsigned long int ten_power(unsigned int n)
{
	unsigned int x;
	unsigned long int pow = 1;

	for (x = 0; x < n; x++)
		pow *= 10;
	return (pow);
}

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: returns an int from the string
 */
unsigned long int _atoi(char *s)
{
	unsigned int x = 0;
	char *p = s;
	unsigned int num_len = 0;
	unsigned int count = 0;
	unsigned long int num = 0;

	while (*p)
	{
		if (*p == '-')
			x++;
		if (*p >= 48 && *p < 58)
		{
			while (*p >= 48 && *p < 58)
			{
				num_len++;
				p++;
			}
			break;
		}
		count++;
		p++;
	}
	while (!(num_len == 0))
	{
		num += ((*(s + count)) - 48) * ten_power(num_len - 1);
		count++;
		num_len--;
	}
	if (x % 2 == 1)
		return (0);
	else
		return (num);
}

/**
 * str_digit - checks if a tsring only contains digits
 * @s: string pointer
 *
 * Return: 1 if only digits is contained and 0 otherwise
 */
int str_digit(char *s)
{
	char *p = s;

	while (*p)
	{
		if (!(*p >= 48 && *p <= 57))
			return (0);
		p++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: input count
 * @argv: array of inputs to the programme
 *
 * Return:0 if it executes with no errors and 98 otherwise
 */
int main(int argc, char *argv[])
{
	unsigned long int arg1;
	unsigned long int arg2;
	unsigned long int mul;

	if (argc != 3 || !(str_digit(argv[1])) || !(str_digit(argv[2])))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
		return (98);
	}
	arg1 = _atoi(argv[1]);
	arg2 = _atoi(argv[2]);
	mul = arg1 * arg2;
	print_number(mul);
	_putchar('\n');
	exit(0);
	return (0);
}

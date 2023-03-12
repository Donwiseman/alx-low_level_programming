#include <stdio.h>

/**
 * ten_power - returns the value of 10 raised to n power
 * @n: power to be raised to
 *
 * Return: value of 10 raised to power n
 */
int ten_power(int n)
{
	int x;
	int pow = 1;

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
int _atoi(char *s)
{
	int x = 0;
	char *p = s;
	int num_len = -1;
	int count = 0;
	int num = 0;

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
	while (!(num_len == -1))
	{
		if (num_len == 0)
		{
			if (num + ((*(s + count)) - 48) > 2147483647)
				return (-2147483648);
			num += ((*(s + count)) - 48);
			break;
		}
		num += ((*(s + count)) - 48) * ten_power(num_len);
		count++;
		num_len--;
	}
	if (x % 2 == 1)
		return (-num);
	else
		return (num);
}

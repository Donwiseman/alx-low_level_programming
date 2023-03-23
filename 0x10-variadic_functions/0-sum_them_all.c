#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: returns the value of the sum of parameters or 0 otherswise
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;

	va_list(args);
	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}

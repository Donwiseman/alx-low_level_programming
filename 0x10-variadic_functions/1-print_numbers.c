#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: string to use as separator for printed numbers
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int num;

	va_list(args);
	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		num = va_arg(args, int);
		if (separator == NULL)
			break;
		if (x == (n - 1))
		{
			printf("%d\n", num);
			break;
		}
		printf("%d%s", num, separator);
	}
}

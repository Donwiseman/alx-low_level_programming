#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  prints strings, followed by a new line
 * @separator: string to use as separator for printed numbers
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list(args);
	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (x = 0; x < n; x++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		if (x == (n - 1))
		{
			printf("%s\n", str);
			break;
		}
		printf("%s%s", str, separator);
	}
}

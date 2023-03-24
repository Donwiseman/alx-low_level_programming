#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that can print char, string, integer and float values
 * @format: a format string to identify the type of arguments being passed
 */
void print_all(const char * const format, ...)
{
	int index = 0, len = 0, num;
	float flt;
	char c, f_char;
	char *str;
	char *sep = ", ";
	va_list args;

	while (*(format + len))
		len++;
	va_start(args, format);
	while (index < len)
	{
		f_char = *(format + index);
		if (index == (len - 1))
			sep = "\n";
		switch (f_char)
		{
			case 'f':
				flt = (float)va_arg(args, double);
				printf("%f%s", flt, sep);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d%s", num, sep);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
			case 'c':
				c = va_arg(args, int);
				printf("%c%s", c, sep);
				break;
		}
		index++;
	}
	va_end(args);
}

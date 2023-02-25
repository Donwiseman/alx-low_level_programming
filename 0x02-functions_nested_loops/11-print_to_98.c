#include <stdio.h>
#include "main.h"

/**
 *print_to_98 -  prints all natural numbers from n to 98
 *@n: starting point number
 */
void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n; a < 99; a++)
		{
			if (a == 98)
				printf("%d", a);
			else
				printf("%d, ", a);
		}
	}
	else
		for (a = n; a >= 98; a--)
		{
			if (a == 98)
				printf("%d", a);
			else
				printf("%d, ", a);
		}
	printf("\n");
}

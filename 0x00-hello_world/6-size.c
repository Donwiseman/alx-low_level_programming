#include <stdio.h>

/**
 * main - prints out the sixe of various data types
 *
 * Return: 0 if process runs with no errors
 */
int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}

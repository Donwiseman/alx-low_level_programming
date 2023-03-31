#include <stdio.h>

void __attribute__((constructor)) called_first(void);

/**
 * called_first - prints an output before main
 */
void called_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

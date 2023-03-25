#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the data(parameters) in a given dog struct
 * @d: pointers to a dog struct
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	char *nil = "(nil)";

	if (d)
	{
		name = d->name;
		owner = d->owner;
		if (name == NULL)
			name = nil;
		printf("Name: %s\n", name);
		printf("Age: %f\n", d->age);
		if (owner == NULL)
			owner = nil;
		printf("Owner: %s\n", owner);
	}
}

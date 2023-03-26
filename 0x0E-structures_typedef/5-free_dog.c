#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for the dog struct
 * @d: pointer to dog struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

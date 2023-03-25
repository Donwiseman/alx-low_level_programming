#include "dog.h"

/**
 * init_dog - initializes a dog struct type
 * @d: pointer to a dog type to be initialized
 * @name: dog name
 * @age: dog age
 * @owner: dog owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

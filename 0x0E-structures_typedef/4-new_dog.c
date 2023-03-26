#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog type
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: returns a pointer to the created dog type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy;
	char *owner_copy;
	int name_len = 0, owner_len = 0, index;
	dog_t *p = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
		return (NULL);
	while (*(name + name_len))
		name_len++;
	while (*(owner + owner_len))
		owner_len++;
	name_copy = malloc((name_len + 1) * sizeof(char));
	owner_copy = malloc((owner_len + 1) * sizeof(char));
	if (!name_copy || !owner_copy)
	{
		free(name_copy);
		free(p);
		free(owner_copy);
		return (NULL);
	}
	/*copy name using for loop*/
	for (index = 0; index <= name_len; index++)
	{
		*(name_copy + index) = *(name + index);
	}
	/*copy owner using for loop*/
	for (index = 0; index <= owner_len; index++)
	{
		*(owner_copy + index) = *(owner + index);
	}
	p->name = name_copy;
	p->age = age;
	p->owner = owner_copy;
	return (p);
}

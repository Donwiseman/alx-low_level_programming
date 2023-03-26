#include <stdlib.h>

/**
 * array_iterator - iterates over each element of a given array running each
 * element through a given function.
 * @array: given integer array
 * @size: size of given array
 * @action: pointer to given function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (!array || !action)
		exit(0);
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}

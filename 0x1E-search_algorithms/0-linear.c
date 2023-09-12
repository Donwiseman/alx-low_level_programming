#include "search_algos.h"
/**
 * linear_search - searches for a value in an int arr using the Linear search
 * @array: array to be searched through
 * @size: size of array to be searched
 * @value: int value to be searched for
 *
 * Return: returns the indexof the found value in the array or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (value == array[x])
			return (x);
	}
	return (-1);
}

#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 *
 * Return: Returns the index of the found value or -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	int floor = 0, roof = ((int) size - 1), x, mid;

	if (array == NULL)
		return (-1);
	while (floor <= roof)
	{
		printf("Searching in array: ");
		for (x = floor; x <= roof; x++)
		{
			if (x == roof)
				printf("%d\n", array[x]);
			else
				printf("%d, ", array[x]);
		}
		mid = (floor + roof) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			roof = mid - 1;
		else
			floor = mid + 1;
	}
	return (-1);
}

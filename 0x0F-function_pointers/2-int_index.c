/**
 * int_index -  searches for an integer.
 * @array: array to search
 * @size: size of array
 * @cmp: function to check if integer is present
 *
 * Return: -1 if no match found or index of the match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size < 1)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}

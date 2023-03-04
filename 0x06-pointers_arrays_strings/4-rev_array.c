/**
 * reverse_array  - reverses the content of an array of integers
 * @a: integer array
 * @n: numver of elements in array
 */
void reverse_array(int *a, int n)
{
	int *p = a;
	int x;
	int temp;

	for (x = 0; x < n - 1; x++)
		p++;
	for (x = 0; x < n / 2; x++)
	{
		temp = *a;
		*a = *p;
		*p = temp;
		a++;
		p--;
	}
}

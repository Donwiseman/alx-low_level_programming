/**
 * sqrt_rec - finds the natural squareroot of a number
 * @n: number whose squareroot is to be found
 * @index: index if present number being checked
 *
 * Return: the squareroot of the number or -1
 */
int sqrt_rec(int n, int index)
{
	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	if (index > n / 2)
		return (-1);
	if (index * index == n)
		return (index);
	return (sqrt_rec(n, index + 1));
}

/**
 * _sqrt_recursion - finds the natural squareroot of a number
 * @n: number whose squareroot is to be found
 *
 * Return: the squareroot of the number or -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt_rec(n, 2));
}

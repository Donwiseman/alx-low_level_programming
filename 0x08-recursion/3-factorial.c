/**
 * factorial - returns factorial of a number
 * @n: factorial to be found
 *
 * Return: returns the nth factorial or -1 if less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

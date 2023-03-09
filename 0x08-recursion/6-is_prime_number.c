/**
 * is_prime - checks if a number is prime
 * @n: number to be checked
 * @index: index of current divisor
 *
 * Return: returns 1 if it is prime or 0 otherwise
 */
int is_prime(int n, int index)
{
	if (n <= 1)
		return (0);
	if (index == (n / 2))
		return (1);
	if (n % index == 0)
		return (0);
	return (is_prime(n, index + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: returns 1 if it is prime or 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

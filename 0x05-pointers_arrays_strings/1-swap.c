/**
 * swap_int - swaps the values of two given integer prameters
 * @a: pointer parameter that points to an int
 * @b: another pointer parameter
 */
void swap_int(int *a, int *b)
{
	int *x;

	*x = *a;
	*a = *b;
	*b = *x;
}

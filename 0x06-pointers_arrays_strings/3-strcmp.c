/**
 *_strcmp - compares the value of two strings
 *@s1: main string in the comparison
 *@s2: string that is compared to the main string
 *
 *Return: 0 if equal, positive value if greater than s2 and negative otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int value = 0;
	int s1_check = 0;
	int s2_check = 0;
	char *p1 = s1;
	char *p2 = s2;

	while (s1_check == 0 || s2_check == 0)
	{
		int s1_value = 0;
		int s2_value = 0;

		if (*p1)
		{
			s1_value = *p1;
			p1++;
		}
		else
		{
			s1_check = 1;
		}
		if (*p2)
		{
			s2_value = *p2;
			p2++;
		}
		else
		{
			s2_check = 1;
		}
		value += (s1_value - s2_value);
	}
	return (value);
}

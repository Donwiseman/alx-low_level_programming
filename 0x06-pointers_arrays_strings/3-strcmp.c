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
	char *p1 = s1;
	char *p2 = s2;

	while (*p1)
	{
		if (*p1 == *p2)
		{
			p1++;
			p2++;
			continue;
		}
		else
		{
			value = *p1 - *p2;
			break;
		}
	}
	return (value);
}

#include <stdio.h>

/**
 * _reverse - copies a string in reverse
 * @s: string to be reversed
 * @rev: string that has identical size to s to copy the reversed string to
 *
 * Return: pointer to reversed string
 */
char *_reverse(char *s, char *rev)
{
	char *p = s;
	char *r;

	if (!*s)
	{
		return (rev);
	}
	p++;/*move pointer to next character for reursion*/
	r = _reverse(p, rev);
	p--;/*return pointer back to original position to copy*/
	*r = *p;
	r++;
	return (r);
}

/**
 * _str_equal - checks for equality of string
 * @s1: first string
 * @s2: second string for comparison
 *
 * Return: 1 if strings are equal and 0 otherwise
 */
int _str_equal(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	else if (!*s1 && !*s2)
		return (1);
	else
		return (_str_equal(s1 + 1, s2 + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 if it is a palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	char s2[200] = "";
	char *p = s2;

	_reverse(s, p);
	return (_str_equal(s, p));
}

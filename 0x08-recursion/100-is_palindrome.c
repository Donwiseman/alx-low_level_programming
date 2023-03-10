#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to a tsring whose length is to be returned
 *
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (!*s)
		return (0);
	len++;
	len += _strlen_recursion((s + 1));
	return (len);
}

/**
 * _reverse - copies a string in reverse
 * @s: string to be reversed
 * @rev: string that has identical size to s to copy the reversed string to
 * @x: string length
 *
 * Return: pointer to reversed string
 */
char *_reverse(char *s, char *rev, int x)
{
	char *r = rev;

	if (x == 0)
	{
		*r = '\0';
		return (rev);
	}
	*r = *(s + x - 1);
	r++;
	x--;
	_reverse(s, r, x);
	return (rev);
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
	char s2[350] = "";
	char *p = s2;
	int x = _strlen_recursion(s);

	_reverse(s, p, x);
	return (_str_equal(s, p));
}

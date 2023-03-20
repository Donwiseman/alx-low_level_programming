#include <stdlib.h>

/**
 * word_counter - returns the word count of string
 * @s: string to be counted
 *
 * Return: the word count or -1 if a null string
 */
int word_counter(char *s)
{
	char *p = s;
	int count = 0;

	if (s == NULL)
		return (0);
	while (*p)
	{
		if (*p == ' ')
		{
			p++;
		}
		else
		{
			count++;
			while (*p != ' ' && *p != '\0')
				p++;
		}
	}
	return (count);
}

/**
 * word_array - copies words from a string into an array
 * @arr: array address to be copied to
 * @str: str to get words from
 *
 * Return: pointer to the array
 */
char **word_array(char **arr, char *str)
{
	int x, y = 0, w_start = 0, w_end = 0, count = 0;
	char *p = str;
	char *word;

	while (*p)
	{
		if (*p == ' ')
		{
			p++;
			count++;
		}
		else
		{
			w_start = count;
			while (*p != ' ' && *p != '\0')
			{
				p++;
				count++;
			}
			w_end = count;
			word = malloc((w_end - w_start + 1) * sizeof(char));
			if (word == NULL)
				return (NULL);
			for (x = 0; (w_start + x) <= w_end; x++)
			{
				if ((w_start + x) == w_end)
				{
					word[x] = '\0';
					break;
				}
				word[x] = str[(w_start + x)];
			}
			arr[y] = word;
			y++;
		}
	}
	arr[y] = NULL;
	return (arr);
}

/**
 * strtow - returns a pointer to an array of strings (words)
 * @str: string to be separeted to words
 *
 * Return: returns a pointer to the array of words
 */
char **strtow(char *str)
{
	char **arr, **w_arr;
	int count = word_counter(str);

	if (count == 0)
		return (NULL);
	arr = malloc((count + 1) * sizeof(char *));
	if (arr == NULL || str == NULL || *str == '\0')
		return (NULL);
	w_arr = word_array(arr, str);
	if (w_arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	return (w_arr);
}

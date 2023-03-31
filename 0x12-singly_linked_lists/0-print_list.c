#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: takes the head of the singly linked list as argument
 *
 * Return: returns the number of nodes in the singly linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	count++;
	count += print_list(h->next);
	return (count);
}

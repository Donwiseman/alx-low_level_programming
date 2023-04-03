#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: head of node
 *
 * Return: returns the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);
	printf("%d\n", h->n);
	n++;
	if (h->next != NULL)
		n += print_listint(h->next);
	return (n);
}

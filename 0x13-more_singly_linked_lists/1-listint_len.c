#include <stdio.h>
#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked list_t list.
 * @h: takes the head of the singly linked list as argument
 *
 * Return: returns the number of nodes in the singly linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	count++;
	count += listint_len(h->next);
	return (count);
}

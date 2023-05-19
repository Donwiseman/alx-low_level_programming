#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head node
 * @index: index of required node
 *
 * Return: the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (len == index)
			return (head);
		len++;
		head = head->next;
	}
	return (NULL);
}

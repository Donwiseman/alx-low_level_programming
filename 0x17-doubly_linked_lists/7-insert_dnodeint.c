#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head node
 * @idx: index of required node position.
 * @n: data to be stored in node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0;
	dlistint_t *new = (dlistint_t *) malloc(sizeof(dlistint_t)), *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (h == NULL || *h == NULL)
	{
		if (h == NULL)
			h = &new;
		else
			*h = new;
		return (new);
	}
	head = *h;
	while (head != NULL)
	{
		if (len == idx)
		{
			(head->prev)->next = new;
			new->prev = head->prev;
			new->next = head;
			head->prev = new;
			return (new);
		}
		if (head->next == NULL && (len + 1) == idx)
		{
			head->next = new;
			new->prev = head;
			return (new);
		}
		len++;
		head = head->next;
	}
	return (NULL);
}

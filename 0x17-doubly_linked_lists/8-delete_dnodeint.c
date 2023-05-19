#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to head node of linked list
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len = 0;
	dlistint_t *h;

	if (head == NULL || *head == NULL)
		return (-1);
	h = *head;
	for (len = 0; h != NULL; len++)
	{
		if (len == index)
		{
			if (len == 0)
			{
				*head = h->next;
				if (h->next != NULL)
					(h->next)->prev = NULL;
			}
			else
			{
				(h->prev)->next = h->next;
				if (h->next != NULL)
					(h->next)->prev = h->prev;
			}
			free(h);
			return (1);
		}
		h = h->next;
	}
	return (-1);
}

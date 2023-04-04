#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: double pointer to head of linked list
 * @idx: index at which new node is to be inserted
 * @n: data(n) of new node;
 *
 * Return: returns the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));
	listint_t *previous;
	unsigned int x, prev_idx;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	/* if head is NULL and not inserting at index 0, return NULL)*/
	if (*head == NULL)
		return (NULL);
	prev_idx = idx - 1;
	previous = *head;
	for (x = 0; x < prev_idx; x++)
	{
		previous = previous->next;
		if (previous == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = previous->next;
	previous->next = new;
	return (new);
}

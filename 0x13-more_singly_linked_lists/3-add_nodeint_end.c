#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: the head of the singly list to added
 * @n: value of n member of the new node
 *
 * Return: returns the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (last == NULL)
		*head = new;
	else if (last->next == NULL)
		last->next = new;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}

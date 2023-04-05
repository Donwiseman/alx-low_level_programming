#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of the listint_t linked list to be reversed
 *
 * Return: returns a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *new_head;

	if (head == NULL || *head == NULL)
		return (NULL);
	next = (*head)->next;
	if (next == NULL)
	{
		return (*head);
	}
	new_head = reverse_listint(&next);
	(*head)->next->next = *head;
	(*head)->next = NULL;
	*head = new_head;
	return (new_head);
}

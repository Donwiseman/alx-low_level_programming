#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head node
 *
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *temp = *head;

	if (temp == NULL)
		return (value);
	value = temp->n;
	if (temp->next == NULL)
	{
		free(temp);
		return (value);
	}
	*head = temp->next;
	free(temp);
	return (value);
}

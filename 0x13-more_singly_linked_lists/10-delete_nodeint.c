#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: double pointer to head of linked list
 * @index: index of the node to be deleted
 *
 * Return: returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *target;
	unsigned int x, prev_index;

	if (*head == NULL)
		return (-1);
	target = *head;
	if (index == 0)
	{
		*head = target->next;
		free(target);
		return (1);
	}
	prev_index = index - 1;
	for (x = 0; x < index; x++)
	{
		if (x == prev_index)
			previous = target;
		target = target->next;
		if (target == NULL)
			return (-1);
	}
	previous->next = target->next;
	free(target);
	return (1);
}

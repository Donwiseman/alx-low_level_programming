#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the list
 * @index: index of specific node to be retrieved
 *
 * Return: returns the nth node or NULL if not present
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int x;

	if (temp == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		temp = temp->next;
		if (temp == NULL)
			break;
	}
	return (temp);
}

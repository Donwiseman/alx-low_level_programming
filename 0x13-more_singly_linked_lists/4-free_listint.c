#include <stdlib.h>
#include "lists.h"

/**
 * free_listint -  frees a list_t list.
 * @head: head of the singly linked list
 */
void free_listint(listint_t *head)
{
	if (head && head->next == NULL)
	{
		free(head);
	}
	else if (head)
	{
		free_listint(head->next);
		free(head);
	}
}

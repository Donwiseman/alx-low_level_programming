#include <stdlib.h>
#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: head of the singly linked list
 */
void free_list(list_t *head)
{
	if (head && head->next == NULL)
	{
		free(head->str);
		free(head);
	}
	else if (head)
	{
		free_list(head->next);
		free(head->next);
		free(head->str);
		free(head);
	}
}

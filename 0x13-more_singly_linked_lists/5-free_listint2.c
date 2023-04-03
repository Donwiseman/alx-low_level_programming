#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2t -  frees a list_t list.
 * @head: head of the singly linked list
 */
void free_listint2t(listint_t *head)
{
	if (head && head->next == NULL)
	{
		free(head);
	}
	else if (head)
	{
		free_listint2t(head->next);
		free(head);
	}
}

/**
 * free_listint2 -  frees a list_t list but equates the head to NULL
 * @head: head of the singly linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (temp && temp->next == NULL)
	{
		free(temp);
		*head = NULL;
	}
	else if (temp)
	{
		free_listint2t(temp->next);
		free(temp);
		*head = NULL;
	}
}

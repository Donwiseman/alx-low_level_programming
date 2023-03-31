#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the head of the singly list to added
 * @str: value of str member of the new node
 *
 * Return: returns the address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *last = *head;
	char *new_str;
	unsigned int len = 0;

	if (new == NULL)
		return (NULL);
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (*(new_str + len))
		len++;
	new->str = new_str;
	new->len = len;
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

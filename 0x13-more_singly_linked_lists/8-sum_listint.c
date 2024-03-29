#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a listint_t linked list
 * @head: head of the listint_t linked list
 *
 * Return: returns sum of all the n values of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (sum);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the sum of all the data (n) of the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	/* Traverse the linked list and add up the values of each node's n */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}


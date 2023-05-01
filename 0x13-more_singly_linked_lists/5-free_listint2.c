#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data (n)
 * @head: double pointer to the head of the list
 * Return: the data in the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	/* Check if the list is empty */
	if (*head == NULL)
		return (0);

	/* Store the data from the head node and move head to the next node */
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}


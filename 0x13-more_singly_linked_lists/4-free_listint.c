#include "lists.h"
/**
 * free_listint - Frees a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	/* Declare a temporary pointer to hold the current node */
	listint_t *current;
	/* Loop until the end of the list is reached */
	while (head != NULL)
	{
		/* Save the current node so that we can free it later */
		current = head;
		/* Update the head pointer to point to the next node in the list */
		head = head->next;
		/* Free the current node */
		free(current);
	}
}


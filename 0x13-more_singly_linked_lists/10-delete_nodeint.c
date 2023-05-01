#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a linked list
 * @head: Pointer to a pointer to the head node of the list
 * @index: Index of the node to be deleted, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);

	/* If the index is 0, delete the head node */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node just before the one to be deleted */
	current = *head;
	for (i = 0; i < index - 1 && current != NULL; i++)
		current = current->next;

	/* If the index is out of range */
	if (current == NULL || current->next == NULL)
		return (-1);

	/* Update the pointers to skip the node to be deleted */
	temp = current->next;
	current->next = temp->next;

	/* Free the memory allocated to the node to be deleted */
	free(temp);

	return (1);
}


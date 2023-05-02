#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t
 * linked list.
 * @head: A pointer to a pointer to the first node of the listint_t list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_node, *prev_node, *current_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	current_node = *head;
	for (i = 0; current_node != NULL && i < idx; i++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (i < idx)
		return (NULL);

	new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (current_node == *head)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current_node;
		prev_node->next = new_node;
	}

	return (new_node);
}

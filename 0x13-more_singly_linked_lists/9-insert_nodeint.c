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
	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	listint_t *prev = get_nodeint_at_index(*head, idx - 1);

	if (prev == NULL)
		return (NULL);

	listint_t *new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = prev->next;
	prev->next = new_node;

	return (new_node);
}

#include "lists.h"
/**
 * get_nodeint_at_index - fn that returns nth node of listint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Initialize a counter to keep track of our current position in the list */
	unsigned int count = 0;
	/* Loop through the list until we reach the end (i.e. NULL) */
	while (head != NULL)
	{
		/* Check if the current node is the one at desired index */
		if (count == index)
		{
			/* If it is, return a pointer to that node */
			return (head);
		}
		/* If it's not, move on to the next node and increment the counter */
		head = head->next;
		count++;
	}
	/* If we get here, the node doesn't exist in the list, return NULL */
	return (NULL);
}


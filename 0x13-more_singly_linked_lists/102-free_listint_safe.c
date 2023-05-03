#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @h: Double pointer to the head of the list
 *
 * Return: Size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp;

	if (!h || !*h)
		return (count);

	while (*h)
	{
		count++;
		/* Store the current node's address in tmp and move the head to next node */
		tmp = *h;
		*h = (*h)->next;

		/* Check if tmp is pointing to an address within the list */
		if (tmp <= tmp->next)
		{
			/* Free the node and continue to the next one */
			free(tmp);
		}
		else
		{
			/* If tmp is points an address outside the list, set current node's next */
			/* pointer to NULL and exit the loop. */
			tmp->next = NULL;
			break;
		}
	}

	/* Set the head to NULL */
	*h = NULL;

	return (count);
}


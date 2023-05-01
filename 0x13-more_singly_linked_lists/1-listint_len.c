#include "lists.h"
/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: pointer to the head of the list
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	/* Loop through the list as long as the current node is not NULL. */
	while (h != NULL)
	{
		/* Move to the next node in the list. */
		h = h->next;
		count++;
	}
	return (count);
}


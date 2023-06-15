#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: points to the head of the dlistint_t
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/* Loop through the list as long as the current node is not NULL. */
	while (h != NULL)
	{
		/* Print the value of the current node to the console. */
		printf("%d\n", h->n);
		/* Move to the next node in the list. */
		h = h->next;
		count++;
	}
	return (count);
}


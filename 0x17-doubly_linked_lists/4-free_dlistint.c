#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
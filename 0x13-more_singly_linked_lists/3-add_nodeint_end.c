#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer value to store in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;
	/* Allocate memory for the new node. */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* Populate the new node with the data and set the next pointer to NULL. */
	new_node->n = n;
	new_node->next = NULL;
	/* If the list is empty, make the new node the head of the list. */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Otherwise, traverse the list to find the last node. */
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	/* Add the new node to the end of the list. */
	last_node->next = new_node;
	return (new_node);
}


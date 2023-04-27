#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	/* Set the next pointer of the new node to NULL */
	new_node->next = NULL;
/* If the linked list is empty, set the head to the new node */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{/* Assign the head to a temporary node */
		temp = *head;
		/* Loop through the linked list to the last node */
		while (temp->next != NULL)
			temp = temp->next;
		/* Set the next pointer of the last node to the new node */
		temp->next = new_node;
	}

	return (new_node);
}


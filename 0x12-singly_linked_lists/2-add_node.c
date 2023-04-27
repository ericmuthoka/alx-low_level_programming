#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the head of the list
 * @str: String to be added to the new node
 * Return: The address of the new element, or NULL if unsuccessful
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
/* Duplicate the string and set the new node's str and len fields */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
/* Set the head of the list to point to the new node */
	*head = new_node;

	return (new_node);
}


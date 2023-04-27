#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list -  function that frees a list_t list
 * @head: pointer to head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head; /*Save the current node to a temporary variable*/
		head = head->next; /*Move the head pointer to the next node*/
		free(current->str); /*Free memory allocated for string field*/
		free(current); /* Freememory allocated for current node*/
	}
}


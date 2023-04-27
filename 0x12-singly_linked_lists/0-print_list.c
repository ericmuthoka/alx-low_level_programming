#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - a function that prints all the elements of list_t
 * @h: pointer to the Head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0; /* Initialize a count variable to keep track of nodes*/

	while (h != NULL) /*loop via the list to the end*/
	{
		if (h->str == NULL) /*If the string is NULL*/
		{
			printf("[0] (nil)\n");
		}
		else /*print the length and string value of the node*/
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++; /*Increment the count for each node printed*/
		h = h->next; /* move to next node*/
	}
	return (count);

}

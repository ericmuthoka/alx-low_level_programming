#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: input string
 * Return: pointer to the duplicated string if success, otherwise NULL
 */

char *_strdup(char *str)
{
	char *copy;

	/* Allocate memory for the duplicate string */
	if (str == NULL)
	{
		return (NULL);
	}
	copy = malloc(strlen(str) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	/* Copy the contents of the original string to the duplicate */
	strcpy(copy, str);
	/* Return a pointer to the duplicate string */
	return (copy);
}

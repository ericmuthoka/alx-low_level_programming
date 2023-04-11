#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to concanation of s1s2, Null
 */

char *str_concat(char *s1, char *s2)
{
	int lens1;
	int lens2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 = strlen(s1);
	lens2 = strlen(s2);
	result = malloc(lens1 + lens2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: input parameter
 * Return: pointer to newly allocated memory space with concanated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, lens1, lens2;
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
	if (n > lens2)
	{
		n = lens2;
	}
	result = malloc(lens1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}

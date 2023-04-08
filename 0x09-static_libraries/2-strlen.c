#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: input string
 * Return: length
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}

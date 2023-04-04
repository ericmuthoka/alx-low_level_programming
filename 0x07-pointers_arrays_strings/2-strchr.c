#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: s if character is found, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}



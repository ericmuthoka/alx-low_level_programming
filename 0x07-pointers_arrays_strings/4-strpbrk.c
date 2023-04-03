#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: string
 * @accept: input string
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		for (char *c = accept; *c != '\0'; c++)
		{
			if (*s == *c)
			{
			return (s);
			}
		}
	}
	return (NULL);
}

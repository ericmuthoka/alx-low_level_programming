#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: string
 * @accept: input string
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
		int i;

		for (; *s != 0; s++)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		}

	return ('\0');
}



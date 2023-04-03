#include "main.h"

/**
 * _strspn - Entry point
 * @s: input paramter
 * @accept: input parameter
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 0;

	while (*s != '\0')
	{
		found = 0;
		for (int i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i])
			{	length++;
				found = 1;
				break;
			}
		if (found == 0)
		{
			return (length);
		}
		s++
	}
	return (length);
}


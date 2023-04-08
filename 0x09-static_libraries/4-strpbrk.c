#include "main.h"


/**
 * _strpbrk - finds first matching char in string
 * @s: input string
 * @accept: input string
 * Return: pointer to matching char
 */

char *_strpbrk(char *s, char *accept)
{
	int k;


	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}


return ('\0');
}


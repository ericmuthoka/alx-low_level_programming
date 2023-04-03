#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 *
 * @s: points to a memory area
 * @n: bytes
 * @b: constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}

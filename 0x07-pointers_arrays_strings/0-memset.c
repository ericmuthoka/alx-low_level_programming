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
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

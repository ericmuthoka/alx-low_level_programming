#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: number of bytes to be copied.
 * @dest: destination memory area
 * @src: source memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
		*dest++ = *src++;
	return (p);
}

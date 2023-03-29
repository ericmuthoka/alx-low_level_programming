#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len_dest;

	len_dest = strlen(dest);
	for (i = 0; src[i]; i++)
		dest[len_dest + i] = src[i];
	dest[len_dest + i] = '\0';
	return (dest);
}

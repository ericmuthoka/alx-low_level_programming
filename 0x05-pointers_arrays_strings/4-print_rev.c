#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string parameter
 * Return: nothing
 */

void print_rev(char *s)
{
	int strlen;
	int length = strlen(s);
	int i = length - 1;

	for (i != '\0' ; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

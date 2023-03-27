#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string parameter
 * Return: nothing
 */

void print_rev(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i++)
		_putchar(s[i]);
	_putchar('\n');
}

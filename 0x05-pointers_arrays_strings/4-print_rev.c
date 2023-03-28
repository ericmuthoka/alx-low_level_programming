#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @s: string parameter
 * Return: nothing
 */

void print_rev(char *s)
{
	int len, i;
	len = strlen(s);
	
	for (i = len - 1; i >= 0; i--)
		_putchar(*s);
	_putchar('\n');

}



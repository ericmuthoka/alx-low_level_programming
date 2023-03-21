#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	_putchar('\n');
	}
}

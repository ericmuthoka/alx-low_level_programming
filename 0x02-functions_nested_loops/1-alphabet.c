#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet
 * Return: always zero
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

#include "main.h"

/**
 * print_last_digit - a function that prints last digit
 * @n: the function parameter
 * Return: x
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}

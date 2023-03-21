#include "main.h"

/**
 * _abs -  functions that prints absolute value of an integer
 * @n: parameter
 * Return: always zero
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n <= 0)
		n = n;
	return (n);
}

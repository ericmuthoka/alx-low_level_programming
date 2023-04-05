#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: input parameter
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 1 || n == 0) /*base case*/
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

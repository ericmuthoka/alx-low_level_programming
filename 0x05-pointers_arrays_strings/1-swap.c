#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: parameter to swap with b
 * @b: parameter to swap with a
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

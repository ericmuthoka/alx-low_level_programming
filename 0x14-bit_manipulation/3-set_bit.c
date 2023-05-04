#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the number to modify
 * @index: the index of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);  /* check for invalid input */

	*n |= (1UL << index);  /* set the bit at the given index to 1 */
	return (1);
}


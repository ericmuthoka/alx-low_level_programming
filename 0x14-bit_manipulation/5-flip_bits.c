#include "main.h"
/**
 * flip_bits - returns the no. of bits to flip to get from a number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that differ between n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;  /* compute the bit-wise XOR of n and m */
	unsigned int count = 0;  /* initialize the count of differing bits to 0 */

	while (diff != 0)
	{
		if ((diff & 1) == 1)  /* check if least significant bit of diff is 1 */
			count++;  /* increment the count if the bits differ */

		diff >>= 1;  /* shift diff to the right by 1 to check the next bit */
	}

	return (count);
}


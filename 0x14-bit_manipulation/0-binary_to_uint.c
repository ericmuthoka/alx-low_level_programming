#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 characters
 *
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		/* If the current character is a valid binary digit */
		if (*b == '0' || *b == '1')
		{
			result <<= 1; /* equivalent to result *= 2 */
			/* Add the value of the current binary digit to the result */
			result += (*b - '0');
			b++;
		}
		else
		{
			/* If the current character is not a valid binary digit */
			return (0);
		}
	}

	return (result);
}


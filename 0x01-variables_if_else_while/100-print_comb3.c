#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * return: always 0
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	if (x < y)
	{
		putchar(x + '0');
		putchar(y + '0');
	putchar(',');
	putchar(' ');
	}
	}
	}
	return (0);
}

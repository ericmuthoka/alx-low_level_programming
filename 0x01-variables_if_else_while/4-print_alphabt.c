#include <stdio.h>

/**
 * main - entry point
 * Return: always zero
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 * Return: always zero for sucess
 */

int main(void)
{
	int n;
	char ch;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

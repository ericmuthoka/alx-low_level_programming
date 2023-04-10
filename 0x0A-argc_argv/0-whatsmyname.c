#include <stdio.h>

/**
 * main - prints the name of a program
 * @argc: number of command line arguments
 * @argv: program line arguments array
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
			 sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

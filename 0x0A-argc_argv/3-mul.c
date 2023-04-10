#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments passed
 * @argv: array with the program command line arguments
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* convert arguments into integers using atoi */
	/* atoi is a stdlib function in C that converts a string to an integer */
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	/* multiply the numbers and print the result*/
	int result = num1 * num2;

	printf("%d\n", result);
	return (0);
}

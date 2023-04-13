#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * multiply - multiplies integers
 * @num1: input parameter
 * @num2: input parameter
 * Return: product
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - argc and argv
 * @argc: argument count
 * @argv: argument vector
 * Return: exit status
 */
int main(int argc, char *argv[])
{
	char *num1str;
	char *num2str;
	int i, result;
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1str = argv[1];
	num2str = argv[2];
	for (i = 0; num1str[i] != '\0'; i++)
	{
		if (!isdigit(num1str[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	for (i = 0; num2str[i] != '\0'; i++)
	{
		if (!isdigit(num2str[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	num1 = atoi(num1str);
	num2 = atoi(num2str);
	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from 0 to 98
 * @n: parameter
 * Return: 0
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			n--;
			if (n != 98)
				printf(", ");
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			n++;
			if (n !=98)
				printf(", ");
		}
	}
	else if (n == 98)
	{
		printf("98\n");
	}


}

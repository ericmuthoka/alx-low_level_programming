#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void thus nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	va_end(args);
	printf("\n");
}

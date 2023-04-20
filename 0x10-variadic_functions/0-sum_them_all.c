#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of variable arguments that follow
 * @...: variadic
 * Return:sum of function parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n); /* Initialize the argument list */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int); /* same as sum = sum + va_arg(ap, int); */
	}
	va_end(ap);
	return (sum);
}



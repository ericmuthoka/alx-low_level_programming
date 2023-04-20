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
	unsigned int i, sum;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n); /* Initialize the argument list */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int); /*sums & gets  next integer from the va_arg list*/
	}
	va_end(ap); /*cleans up the variable argument list*/
		   /*frees up resources allocated for the variable argument list*/
	return (sum);
}



#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returning the sum of all its paramters.
 * @n: first parameter
 * @...: second parameter
 * Return: If n == 0 return 0 else return the sum
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}


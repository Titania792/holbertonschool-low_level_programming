#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - function that returns the sum of all its parameters.
*@n: n
*
*Return: aa
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list(a);

	if (n == 0)
		return (0);

	va_start(a, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(a, const unsigned int);

	va_end(a);
	return (sum);
}

#include "variadic_functions.h"

/**
*print_numbers - function that prints numbers, followed by a new line.
*@separator: is the string to be printed between numbers
*@n:is the number of integers passed to the function
*
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(b);

	va_start(b, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(b, unsigned int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(b);
}

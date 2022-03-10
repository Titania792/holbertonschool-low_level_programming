#include "variadic_functions.h"

/**
*print_strings - function that prints strings, followed by a new line.
*@separator:  is the string to be printed between the strings
*@n: is the number of strings passed to the function
*
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list(c);

	va_start(c, n);

	for (i = 0; i < n;)
	{
		str = va_arg(c, char *);

		if (str != NULL)
			printf("%s", str);

		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}
	printf("\n");
	va_end(c);
}

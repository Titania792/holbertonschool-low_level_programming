#include "main.h"

/**
*binary_to_uint - function that converts a binary number to an unsigned int.
*@b: is pointing to a string of 0 and 1 chars
*Return: the converted number, or 0 if: b is NULL or
*there is one or more chars in the string b that is not 0 or 1
*
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		n <<= 1;
		n += b[i] - '0';
		i++;
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] >= 'a' && b[i] <= 'z')
			return (0);
	}
	return (n);
}

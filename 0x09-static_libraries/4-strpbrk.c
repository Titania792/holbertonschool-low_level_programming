#include "main.h"

/**
*_strpbrk -  finds the first character in the string str1 that
*matches any character specified in str2.
*@accept: jkl
*@s: rty
*Return: hjk
**/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);

		s++;
	}
	return ('\0');
}

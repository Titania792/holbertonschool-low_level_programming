#include "main.h"

/**
*_strspn - function that gets the length of a prefix substring.
*@accept: segment
*
*@s: segment
* Return: the number of bytes in the initial segment
* of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	while (s[a] != '\0')
	{
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				c++;
			break;
		}
	}
	return (s);
}

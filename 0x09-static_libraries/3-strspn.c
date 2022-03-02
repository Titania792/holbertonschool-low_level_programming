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
	int a, b, c = 0;

	for (a = 0; s[a] != ' '; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
	}
	return (c);
}

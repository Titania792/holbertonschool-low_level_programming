#include "main.h"

/**
*_strchr - function that locates a character in a string.
*@c: character
*@s: string
*
* Return: s
*/
char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] != c; b++)
	{
		if (s[b] == c)
			return (s + b);

	}
	return (0);
}

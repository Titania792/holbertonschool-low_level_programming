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

	for (b = 0; s[b] != '\0'; b++)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	return (0);
}

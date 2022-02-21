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
		if (s[b] == c)
			return (s + b);
	}
	if (c == '\0')
		return (s);

	return (0);
}

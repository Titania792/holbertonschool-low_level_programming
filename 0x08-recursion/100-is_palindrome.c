#include "main.h"

/**
*_strlen_recursion- strlen
*@s: str
*Return: 0
**/
int _strlen_recursion(char *s)
{
	int capture = 1;

	if (*s != '\0')
	{
		capture += _strlen_recursion(s + 1);
		return (capture);
	}

	return (0);
}

/**
*palindrome - palindrome
*@s: string
*@i: i
*@x: x
*Return: 1 - 0
**/
int palindrome(char *s, int i, int x)
{
	if (i == x)
		return (1);
	else if (i == x - 1)
		return (s[i] == s[x]);
	else if (s[i] != s[x])
		return (0);
	else
		return (palindrome(s, i + 1, x - 1));
}

/**
*is_palindrome - function that returns 1 if a string is
*a palindrome and 0 if not.
*@s: string
*Return: 1 - 0
**/
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	if (length == 0 || *s != s[length - 1])
		return (0);
	else
		return (palindrome(s, 0, length - 1));
}

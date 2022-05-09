#include <stdio.h>
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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (0);
}

/**
*_memcpy - function that copies memory area.
*@dest: memory area pointed
*@n: bytes from memory area src
*@src: memory area
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0, y = 0;

	while (src[x++])
	{
		y++;
	}
	for (x = 0; src[x] && x < n; x++)
	{
		dest[x] = src[x];
	}
	for (x = y; x < n; x++)
	dest[x] = '\0';

	return (dest);

}

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

/**
*_strstr - a function that locates a substring
*@haystack: string 1
*@needle: string 2
*Return: pointer to the beginning of the located substring,
*or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int index;
	int len = 0;

	while (needle[len] != '\0')
		len++;

	while (*haystack)
	{
		for (index = 0; needle[index]; index++)
		{
			if (haystack[index] != needle[index])
				break;
		}
		if (index != len)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}

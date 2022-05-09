#include "main.h"

/**
*_strcat - function that concatenates two strings.
*@src: tyui
*@dest: tyuip
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int x = 0, y;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (y = 0; src[y] != '\0'; y++, x++)
	{
		dest[x] = src[y];
	}
	dest[x] = '\0';

	return (dest);
}

/**
*_strncat - function that concatenates two strings.
*@src: tyui
*@dest: tyuip
*@n: rtfg
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, l = 0;

	while (dest[x++])
	{
		l++;
	}
	for (x = 0; x < n && src[x] != '\0'; l++, x++)
	{
		dest[l] = src[x];
	}

	return (dest);
}

/**
*_strncpy - function that copies a string.
*@src: tyui
*@dest: tyuip
*@n: yui
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

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
*_strcmp - function that compares two strings.
*@s1: tyui
*@s2: tyuip
*Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0'; i++)

		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

	if (s2[i] != '\0')
		return (s1[i] - s2[i]);

	return (0);
}

/**
*_memset - function that fills memory with a constant byte.
*@s: area pointed
*@n: the first bytes of the memory
*@b: constant byte
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n;)
	{
		s[a] = b;
		a++;
	}

	return (s);
}

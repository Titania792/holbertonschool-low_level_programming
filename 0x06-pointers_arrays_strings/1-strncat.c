#include "main.h"

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

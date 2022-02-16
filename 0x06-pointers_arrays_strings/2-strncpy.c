#include "main.h"

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

	while (dest[x])
	{
		y++;
	}
	while (x < n && (src[x] != '\0'))
	{
		dest[x] = src[x];
	}
	for (x = y; x < n; x++)
	dest[x] = '\0';

	return (dest);

}

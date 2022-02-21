#include "main.h"

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

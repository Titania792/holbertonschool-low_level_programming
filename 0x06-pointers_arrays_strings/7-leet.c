#include "main.h"

/**
*leet - function that encodes a string into 1337.
*@a: fghj
*Return: 0
*
*/
char *leet(char *a)
{
	int b, c;
	char d[12] = "aAeEoOtTlL";
	char e[12] = "4433007711";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if (a[b] == d[c])
				a[b] = e[c];
		}
	}
	return (a);
}

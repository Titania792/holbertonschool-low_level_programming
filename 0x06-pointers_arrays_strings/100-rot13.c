#include "main.h"

/**
*rot13 - function that encodes a string using rot13.
*@a: yuio
*Return: a
*/
char *rot13(char *a)
{
	int b, c;
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char e[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; c < 52; c++)
		{
			if (a[b] == d[c])
			{
				a[b] = e[c];
				break;
			}
		}
	}
	return (a);
}

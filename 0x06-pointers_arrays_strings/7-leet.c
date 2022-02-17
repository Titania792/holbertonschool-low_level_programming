#include "main.h"

/**
*leet - function that encodes a string into 1337.
*@a: fghj
*Return: 0
*
*/
char *leet(char *a)
{
	int b = 0;

	while (a[b] != '\0')
	{
		if (a[b] == 97 || a[b] == 65)
			a[b] = 52;

		if (a[b] == 101 || a[b] == 69)
			a[b] = 51;

		if (a[b] == 79 || a[b] == 111)
			a[b] = 48;

		if (a[b] == 116 || a[b] == 84)
			a[b] = 55;

		if (a[b] == 108 || a[b] == 76)
			a[b] = 49;

		b++;
	}
	return (a);
}

#include "main.h"

/**
*cap_string - function that capitalizes all words of a string.
*@a: tyui
*Return: a
*/
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
		if ((a[i] - 1) == ' ' && a[i] >= 97 && a[i] <= 122)
			a[i] -= 32;
	}
	return (a);
}

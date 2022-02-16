#include "main.h"

/**
*cap_string - function that capitalizes all words of a string.
*@a: tyui
*Return: a
*/
char *cap_string(char *a)
{
	int i = 0;

	if (a[i] >= 97 && a[i] <= 122)
		a[i] -= 32;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			if (a[i - 1] == ' ' || a[i - 1] == '\n' || a[i - 1] == '\t' || a[i - 1]
				== ',' || a[i - 1] == ';' || a[i - 1] == '.' || a[i - 1] == '!'
				|| a[i - 1] == '?' || a[i - 1] == '"' || a[i - 1] == '(' ||
				a[i - 1] == ')' || a[i - 1] == '{' || a[i - 1] == '}')
				a[i] -= 32;
		}
		i++;
	}
	return (a);
}

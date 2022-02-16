#include "main.h"

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

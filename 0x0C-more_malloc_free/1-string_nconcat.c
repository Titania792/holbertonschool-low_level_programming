#include "main.h"

/**
*string_nconcat - function that concatenates two strings.
*@s1: string 1
*@s2: string 2
*@n: aaa
*
*Return: pointer pointing to a newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a = 0;
	unsigned int i, j, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	str = malloc(sizeof(str) * (a + n + 1));

	if (str == NULL)
		return (NULL);

	b = 0;

	for (i = 0; s1[i]; i++)
		str[b++] = s1[i];

	for (j = 0; j < n && s2[j]; j++)
		str[b++] = s2[j];

	str[b] = '\0';

	return (str);
}

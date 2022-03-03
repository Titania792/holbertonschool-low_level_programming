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
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	str = malloc(sizeof(str) * (a + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		str[i] = s1[i];

	for (j = 0; j <= n && s2[j]; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);
}

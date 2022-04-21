#include "main.h"

/**
*str_concat - function that concatenates two strings.
*@s1: string given n°1
*@s2: string given n°2
*Return: NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i = 0;
	int a, b, s, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = _strlen(s1);
	b = _strlen(s2);
	s = a + b;

	c = malloc((sizeof(char) * (s + 1)));

	if (c == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			c[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++,  i++)
		{
			c[i] = s2[j];
		}
	c[i] = '\0';
	}

	return (c);
}

/**
 *_strlen - asd
 *@s: asd
 *Return: asd
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

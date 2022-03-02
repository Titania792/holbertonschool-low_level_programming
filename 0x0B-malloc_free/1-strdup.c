#include "main.h"

/**
*_strdup - function that returns a pointer to a newly allocated
*space in memory, which contains a copy of the string given as a parameter.
*@str: string
*Return: Returns NULL if str = NULL
*On success, the _strdup function returns a pointer to the
*duplicated string. It returns NULL if insufficient memory was available
*
*/
char *_strdup(char *str)
{
	int j = 0;
	int i = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	p = malloc((sizeof(char) * i + 1));
	if (p == NULL)
	{
		return (NULL);
	}

	while (j < i)
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}

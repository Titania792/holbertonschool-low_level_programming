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
	char *p;
	int i, j;

	if (str == 0)
		return (NULL);

	for (j = 0; j < *str; j++)
	{
		p = malloc(j + 1);
	}
	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}

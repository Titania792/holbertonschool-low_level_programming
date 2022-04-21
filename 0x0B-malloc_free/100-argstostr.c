#include "main.h"

/**
*argstostr - function that concatenates all the arguments of your program.
*@ac: argc
*@av: argv
*Return: NULL if ac == 0 or av == NULL
*Returns a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int l = 0, x = 0, i, j;
	char *s;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		l += _strlen(av[i]);
	}
	l += (ac + 1);

	s = malloc(l * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[x++] = av[i][j];
		}
		s[x++] = '\n';
	}

	return (s);
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

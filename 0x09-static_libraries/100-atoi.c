#include "main.h"
/**
 *_atoi - converts the string argument str to an integer 
 *@s: tyui
 *Return: jkl
 */
int _atoi(char *s)
{
	int op = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			op *= -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;

	} while (*s++);

	return (n * op);
}

#include "main.h"
/**
 *puts2 - function that prints every other character of a string
 *@str: asd
 *
 */
void puts2(char *str)
{
	int pos = 0;
	int i = 0;

	while (str[pos] != '\0')
		pos++;

	for (i = 0; i < pos; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}

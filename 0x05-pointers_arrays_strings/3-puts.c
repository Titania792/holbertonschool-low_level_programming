#include "main.h"

/**
*_puts - tjyu
*@str: string to print
*Return: rtyuio
*/
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

#include "main.h"

/**
*_puts - tjyu
*@i: tyui
*@str: tyuip
*Return: rtyuio
*/
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
	_putchar(*(str + i));
	i++;
	}
	_putchar('\n');
}

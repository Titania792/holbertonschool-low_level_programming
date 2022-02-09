#include "main.h"

/**
*@c: ewas
*print_most_numbers - abcd
*/
void print_most_numbers(void)
{
	int c;
	
	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		_putchar((c % 10) + '0');
	}
	_putchar('\n');
}

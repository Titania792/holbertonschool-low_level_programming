#include "main.h"

/**
 *print_diagonal - yuk
 *@n: sdfx
 *
 * Return:fghj
*/
void print_diagonal(int n)
{
	int x, e;

	for (x = 0; x < n; x++)
	{
		for(e = 0; e < x; e++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');

	}
	if(n >= 1)
	_putchar('\n');
}

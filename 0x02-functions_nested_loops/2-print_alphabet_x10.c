#include "main.h"

/**
* print_alphabet_x10 - abcd
*/
void print_alphabet_x10(void)
{
	char x;
	int count;
	count = 0;

	while (count < 10)
{
	for (x = 'a'; x <= 'z'; ++x)
{
_putchar(x);
}
count++;
	_putchar('\n');
}
}

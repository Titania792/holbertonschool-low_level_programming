#include "main.h"
#include <ctype.h>

/**
*  _islower - abcd
* Return: 1 if int is lowercase, 0 if otherwise
* @c: tijf
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

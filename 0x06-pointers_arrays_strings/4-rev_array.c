#include "main.h"

/**
*reverse_array - function that reverses the content of an array of integers.
*@a: tyui
*@n: rtfg
*
*/
void reverse_array(int *a, int n)
{
	int i, o, u;

	o = n - 1;

	for (i = 0; i < o; o++, i--)
	{
	u = a[i];
	a[i] = a[o];
	a[o] = u;
	}
}

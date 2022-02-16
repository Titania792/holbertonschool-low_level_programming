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

	i = n - 1;

	for (o = 0; o < i; o++, i--)
	{
	u = a[i];
	a[i] = a[o];
	a[o] = u;
	}
}

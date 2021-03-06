#include "main.h"

/**
*_con - ghj
*@n: n° given
*@x: aaa
*Return: If n does not have a natural square root,
*the function should return -1
*/
int _con(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (_con(n, x + 1));
}


/**
*_sqrt_recursion - function that returns the
*natural square root of a number.
*@n: n° given
*Return: If n does not have a natural square root,
*the function should return -1
*
*/
int _sqrt_recursion(int n)
{
	return (_con(n, 0));
}

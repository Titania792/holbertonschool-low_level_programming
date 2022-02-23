#include "main.h"

/**
*prime - condiciones para identificar n° primos
*@n: n° given
*@b: variable n°
*Return: 1 if it is prime, 0 if it is not
*/
int prime(int n, int b)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		if (n % b == 0 && b != 1 && b != n)
			return (0);
		else if (b == n)
			return (1);

	}
	return (prime(n, b + 1));
	return (0);
}

/**
*is_prime_number - function that returns 1 if the input
*integer is a prime number, otherwise return 0.
*Return: prime
*@n: n° given
*/
int is_prime_number(int n)
{
	return (prime(n, 1));
}

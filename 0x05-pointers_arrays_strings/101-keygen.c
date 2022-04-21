#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/**
*main - program that generates random valid
*passwords for the program 101-crackme.
*Return: 0
**/
int main(void)
{
	int n = 0, i = 2772;

	srand(time(NULL));

	n = rand() % 98;

	while (i != 0)
	{
		putchar(n);
		i -= n;
		if (i <= 125 && i >= 33)
			n = i;
	}

	return (0);
}

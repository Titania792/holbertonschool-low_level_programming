#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry Point
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
		int n;
		int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (digit == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (digit < 6)
	{
		digit = n % 10;
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, digit);
	}
	else
		(digit > 5);
	{
		digit = n % 10;
		printf("Last digit of %d is %i and is greater than 5\n", n, digit);
	}
		return (0);
}

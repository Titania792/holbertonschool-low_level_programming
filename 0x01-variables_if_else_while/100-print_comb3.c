#include <stdio.h>

/**
* main - Entry Point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x, d;

	for (x = 0; x <= 9; x++)
	{
		for (d = x; d <= 9; d++)
		{
			if (x != d)
			{
			putchar(x);
			putchar(d);
			if (x < 8)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
* main - Entry Point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int letter;
	int a = 9;
	int xd;

	for (letter = 0; letter <= a; letter++)
	{
		xd = letter + 48;
	putchar(xd);
	if (letter < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

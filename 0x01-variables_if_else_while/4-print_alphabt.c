#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */
	int main(void)
	{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
	if (letter != 103 && letter != 100)
		putchar(letter);
	}

	putchar('\n');
	return (0);
	}

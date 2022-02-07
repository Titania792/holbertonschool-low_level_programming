#include <stdio.h>

/**
* main - Entry Point
*
* print_alphabet
*
* Return: Always 0 (Success)
*/
int main(void)
{
void print_alphabet(void);
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
{
	putchar(letter);
	letter++;
}
}

	putchar('\n');
	return (0);
}

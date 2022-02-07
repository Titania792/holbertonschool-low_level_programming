#include <stdio.h>

/**
* main - Entry Point
*
* print_alphabet
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
  {
	putchar(letter);
	letter++;
  }
}

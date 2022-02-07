#include <stdio.h>
#include <unistd.h>

/**
* main - Entry Point
*
* print_alphabet
*
* Return: Always 0 (Success)
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}

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

#include <stdio.h>

/**
*main - program that prints the name of the file it was compiled from, followed by a new line.
*@argv: aa
*@argc: aa
*Return: aa
*/
int main(int __attribute__ ((unused)) argc, char ** argv)
{
	printf("%s\n", argv[0]);
	return (0);
}

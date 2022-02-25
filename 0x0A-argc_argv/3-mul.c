#include "main.h"
#include <stdlib.h>

/**
*main - aaa
*@argv: aaa
*@argc: aaa
*Return: aaa
*/
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

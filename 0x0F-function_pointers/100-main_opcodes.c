#include <stdio.h>
#include <stdlib.h>

/**
*main - program that prints the opcodes of its own main function.
*@argc:argc
*@argv: argv
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < num)
	{
		printf("%02x", *((unsigned char *)main + i));

		i++;

		if (num > i)
			printf(" ");
	}

	printf("\n");

	return (0);
}

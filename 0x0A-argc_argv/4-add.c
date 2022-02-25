#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - aaa
*@argc: aaa
*@argv: aaa
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int)strlen(argv[i]); j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{

			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

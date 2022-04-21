#include "main.h"
#include <stdio.h>

/**
*print_buffer - function that prints a buffer.
*@b: ptr
*@size: bytes of the buffer
*/
void print_buffer(char *b, int size)
{
	int i = 0, x = 0, y = 0;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%.8x:", i);
			for (x = i; x < i + 10; x++)
			{
				if (x % 2 == 0)
					printf(" ");
				else if (x < size)
					printf("%.2x", *(b + x));
				else
					printf("  ");
			}

			printf(" ");

			for (y = x; y < x + 10; x++)
			{
				if (y >= size)
					break;
				else if (*(b + y) < 32 || *(b + y) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + y));
			}

			printf("\n");
		}
	}
}

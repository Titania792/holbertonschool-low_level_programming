#include "main.h"

/**
*infinite_add - function that adds two numbers.
*@n1: number
*@n2: number
*@r: buffer that the function will use to store the result
*@size_r: buffer size
*Return: 0
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, x = 0, y = 0, z = 0;
	int a = 0, b = 0, c = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[x] != '\0')
		x++;
	if (i > x)
		y = i;
	else
		y = x;
	if (y + 1 > size_r)
		return (0);
	r[y] = '\0';
	for (z = y - 1 ; z >= 0 ; z--)
	{
		i--;
		x--;
		if (i >= 0)
			a = n1[i] - '0';
		else
			a = 0;
		if (x >= 0)
			b = n2[x] - '0';
		else
			b = 0;
		r[z] = (a + b + c) % 10 + '0';
		c = (a + b + c) / 10;
	}
	if (c == 1)
	{
		r[y + 1] = '\0';
		if (y + 2 > size_r)
			return (0);
		while (y-- >= 0)
			r[y + 1] = r[y];
		r[0] = c + '0';
	}
	return (r);
}

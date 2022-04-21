#include "main.h"

/**
*alloc_grid - function that returns a pointer to
*a 2 dimensional array of integers.
*@width: 0
*@height: 0
*Return: NULL on failure
*/

int **alloc_grid(int width, int height)
{
	int **a;
	int i, x;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}

		for (x = 0; x < width; x++)
		{
			a[i][x] = 0;
		}
	}

	return (a);
}

#include "main.h"
#include <stdlib.h>
/**
*array_range - function that creates an array of integers.
*@min: minimo
*@max: maximo
*Return: Return: the pointer to the newly created array
*If min > max, return NULL
*If malloc fails, return NULL
*
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int a = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[a++] = i;
	}

	return (ptr);
}

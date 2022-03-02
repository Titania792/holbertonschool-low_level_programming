#include "main.h"

/**
*create_array - function that creates an array of chars, and
*initializes it with a specific char.
*@size: tamaño del array.
*@c: specific char.
*Return: Returns NULL if size = 0
*Returns a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{

	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(*ar));

		if (ar == NULL)
	{
			return (NULL);
	}
	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}

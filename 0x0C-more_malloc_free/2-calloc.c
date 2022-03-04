#include "main.h"

/**
*_calloc - function that allocates memory for an array, using malloc.
*@nmemb: aaa
*@size: aaa
*Return: aaa
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (unsigned int *)calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}

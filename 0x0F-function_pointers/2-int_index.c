#include "function_pointers.h"

/**
*int_index - function that searches for an integer.
*@array: array
*@size: the number of elements in the array array
*@cmp: is a pointer to the function to be used to compare values
*
*Return: If size <= 0, return -1, If no element matches, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

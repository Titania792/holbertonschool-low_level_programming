#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: -1 or the index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t inx = 0;

	if (array == NULL)
		return (-1);

	while (inx < size)
	{
		printf("Value checked array[%lu] = [%d]\n", inx, array[inx]);
		if (array[inx] == value)
		{
			return (inx);
		}
		inx++;
	}
	return (-1);
}

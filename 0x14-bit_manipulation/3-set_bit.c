#include "main.h"

/**
*set_bit - function that sets the value of a bit to 1 at a given index.
*@n: number
*@index: the index, starting from 0 of the bit you want to set
*Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set_value;

	if (index > 64)
		return (-1);

	set_value = 1 << index;
	*n = (*n | set_value);

	return (1);
}

#include "main.h"

/**
*clear_bit - function that sets the value of a bit to 0 at a given index.
*@n: number
*@index: the index, starting from 0 of the bit you want to set
*Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set_value;

	if (index > 64)
		return (-1);

	set_value = 1 << index;

	if (*n & set_value)
		*n ^= set_value;

	return (1);
}

#include "lists.h"

/**
*dlistint_len - function that returns the number of
*elements in a linked dlistint_t list.
*@h: pointer.
*Return: number of elements in a linked list.
*
*/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

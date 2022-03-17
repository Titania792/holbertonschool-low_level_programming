#include "lists.h"

/**
*list_len - function that returns the number of elements in a linked list_t list.
*@h: pointer.
*Return: number of elements in a linked list.
*
*Auth: Titania792.
*/
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

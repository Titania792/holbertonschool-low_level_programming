#include "lists.h"

/**
*listint_len - function that returns the number of elements in a linked listint_t list.
*@h: pointer
*
*Auth: Titania792
*/
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}

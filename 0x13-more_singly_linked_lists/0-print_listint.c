#include "lists.h"

/**
*print_listint - function that prints all the elements of a listint_t list.
*@h: pointer
*
*Auth: Titania792
*/
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);

		h = h->next;
		i++;
	}
	return (i);
}

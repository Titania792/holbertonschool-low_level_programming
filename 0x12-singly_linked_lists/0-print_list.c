#include "lists.h"

/**
*print_list - function that prints all the elements of a list_t list.
*@h: pointer
*Return: the number of nodes
*
*Auth: Titania792
*/
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}
	return (i);
}

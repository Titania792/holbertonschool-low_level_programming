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
	unsigned int i;

	for (i = 0; h[i] != '\0';)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			h = h->next;
		}
		else
		{
				printf("[%u] %s\n" h->len, h->str);
				h = h->next;
		}
		i++;
	}
	return (i);
}

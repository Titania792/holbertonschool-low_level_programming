#include "lists.h"

/**
*print_dlistint - function that prints all the elements of a dlistint_t list.
*@h: pointer
*Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			printf("(nil)\n");
		else
			printf("%d\n", h->n);

		h = h->next;
		i++;
	}
	return (i);
}

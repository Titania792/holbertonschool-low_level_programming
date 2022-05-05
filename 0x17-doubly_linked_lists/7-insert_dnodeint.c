#include "lists.h"

/**
*insert_dnodeint_at_index -  function that inserts a
*new node at a given position
*@h: pointer
*@idx: is the index of the list where the new node should
*be added. Index starts at 0
*@n: numb given
*Return: nextnode
*
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *currentnode, *nextnode;

	currentnode = *h;
	nextnode = malloc(sizeof(dlistint_t));

	if (*h == NULL || nextnode == NULL)
		return (NULL);

	nextnode->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (idx > 0)
	{
		currentnode = currentnode->next;
		idx--;
		if (currentnode == NULL)
		{
			free(nextnode);
			return (NULL);
		}
		if (currentnode->next == NULL)
		{
			free(nextnode);
			return (add_dnodeint_end(h, n));
		}
	}
	nextnode->next = currentnode->next;
	nextnode->prev = currentnode;
	currentnode->next->prev = nextnode;
	currentnode->next = nextnode;
	return (nextnode);
}

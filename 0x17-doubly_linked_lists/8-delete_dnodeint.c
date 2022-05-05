#include "lists.h"

/**
*delete_dnodeint_at_index - function that deletes the
*node at index index of a dlistint_t linked list.
*@head: pointer
*@index: is the index of the node that should be
*deleted.Index starts at 0
*Return: 1 if it succeeded, -1 if it failed
*
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *currentnode, *nextnode;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	currentnode = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(currentnode);
		return (1);
	}

	while (i < (index - 1))
	{
		currentnode = currentnode->next;

		if (currentnode == NULL)
			return (-1);

		i++;
	}

	nextnode = currentnode->next;
	currentnode->next = nextnode->next;
	free(nextnode);

	return (1);
}

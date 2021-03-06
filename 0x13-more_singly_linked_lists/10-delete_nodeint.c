#include "lists.h"

/**
*delete_nodeint_at_index - function that deletes the node
*at index index of a listint_t linked list.
*@head: pointer
*@index: is the index of the node that should be
*deleted.Index starts at 0
*Return: 1 if it succeeded, -1 if it failed
*
*Auth: Titania792
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *currentnode, *nextnode;

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

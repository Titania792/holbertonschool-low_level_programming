#include "lists.h"

/**
*insert_nodeint_at_index - function that inserts a new node at a given position.
*@head: pointer
*@idx: is the index of the list where the new node should be added. Index starts at 0
*@n: numb given
*
*Auth: Titania792
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *currentnode, *nextnode;

	currentnode = *head;
	nextnode = malloc(sizeof(listint_t));

	if (nextnode == NULL)
		return (NULL);

	nextnode->n = n;

	if (idx == 0)
	{
		nextnode->next = currentnode;
		*head = nextnode;
		return (*head);
    }

	while (idx > 1)
	{
		currentnode = currentnode->next;
		idx--;
		if (currentnode == NULL)
		{
			free(nextnode);
			return (NULL);
		}
	}
	nextnode->next = currentnode->next;
	currentnode->next = nextnode;
	return (nextnode);
}

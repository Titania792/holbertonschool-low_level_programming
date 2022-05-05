#include "lists.h"

/**
*free_dlistint - function that frees a dlistint_t list.
*@head: pointer/first node
*
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentnode, *nextnode;

	currentnode = head;

	while (currentnode != NULL)
	{
		nextnode = currentnode->next;
		free(currentnode);
		currentnode = nextnode;
	}
}

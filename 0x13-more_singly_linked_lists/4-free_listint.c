#include "lists.h"

/**
*free_listint - function that frees a listint_t list.
*@head: pointer/first node
*
*Auth: Titania792
*/
void free_listint(listint_t *head)
{
	listint_t *currentnode, *nextnode;

	currentnode = head;

	while (currentnode != NULL)
	{
		nextnode = currentnode->next;
		free(currentnode);
		currentnode = nextnode;
	}
}

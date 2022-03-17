#include "lists.h"

/**
*free_list - function that frees a list_t list.
*@head: pointer/first node
*
*Auth: Titania792
*/
void free_list(list_t *head)
{
	list_t *currentnode, *nextnode;

	currentnode = head;

	while (currentnode != NULL)
	{
		nextnode = currentnode->next;
		free(currentnode->str);
		free(currentnode);
		currentnode = nextnode;
	}
}

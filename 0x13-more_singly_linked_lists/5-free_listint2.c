#include "lists.h"

/**
*free_listint2 - function that frees a list_t list.
*@head: pointer/first node
*
*Auth: Titania792
*/
void free_listint2(listint_t **head)
{
	listint_t *currentnode, *nextnode;

	if (head == NULL)
		return;

	currentnode = *head;
	while (currentnode != NULL && head != NULL)
	{
		nextnode = currentnode;
		currentnode = currentnode->next;
		free(nextnode);
	}
	*head = NULL;
}

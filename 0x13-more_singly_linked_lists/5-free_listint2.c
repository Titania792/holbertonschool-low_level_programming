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

	currentnode = *head;

	while (currentnode != NULL)
	{
		nextnode = currentnode->next;
		free(currentnode);
		currentnode = nextnode;
	}
	if (head == NULL)
		printf("(nil)");
}

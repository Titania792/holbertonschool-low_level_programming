#include "lists.h"

/**
*pop_listint - function that deletes the head node of a listint_t linked list,
*and returns the head node’s data (n).
*@head: pointer/first node.
*Return: the head node’s data (n).
*
*Auth: Titania792.
*/
int pop_listint(listint_t **head)
{
	listint_t *deletethisnode;
	int data = (*head)->n;

	if (head == NULL)
		return (0);

	deletethisnode = *head;
	*head = (*head)->next;
	free(deletethisnode);

	return (data);
}

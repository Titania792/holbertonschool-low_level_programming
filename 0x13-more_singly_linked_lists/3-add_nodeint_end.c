#include "lists.h"

/**
*add_nodeint_end - function that adds a new node at the end of a listint_t list
*@head: first node.
*@n: num° given.
*Return: the address of the new element, or NULL if it failed.
*
*Auth: Titania792
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		while (lastnode->next)
			lastnode = lastnode->next;

		lastnode->next = newnode;
	}
	return (newnode);
}

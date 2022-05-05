#include "lists.h"

/**
*add_dnodeint_end - function that adds a new node at the
*end of a dlistint_t list
*@head: first node.
*@n: num° given.
*Return: the address of the new element, or NULL if it failed.
*
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *lastnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		 newnode->prev = NULL;
	}
	else
	{
		lastnode = *head;
		while (lastnode->next)
			lastnode = lastnode->next;

		lastnode->next = newnode;
		newnode->prev = lastnode;
	}
	return (newnode);
}

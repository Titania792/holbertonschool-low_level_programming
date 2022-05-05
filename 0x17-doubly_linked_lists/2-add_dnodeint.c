#include "lists.h"

/**
*add_dnodeint - function that adds a new node at the
*beginning of a dlistint_t list
*@head: first node.
*@n: numb given.
*Return: the address of the new element, or NULL if it failed.
*
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (n == '\0')
		return (NULL);

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if ((*head) != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}

#include "lists.h"

/**
*add_nodeint - function that adds a new node
*at the beginning of a listint_t list.
*@head: first node.
*@n: num° given.
*Return: the address of the new element, or NULL if it failed.
*
*Auth: Titania792
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

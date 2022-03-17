#include "lists.h"

/**
*add_node - function that adds a new node at the beginning of a list_t list.
*@head: pointer.
*@str: string given.
*Return: the address of the new element, or NULL if it failed.
*
*Auth: Titania792
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

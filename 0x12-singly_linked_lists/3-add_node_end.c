#include "lists.h"

/**
*add_node_end - function that adds a new node at the end of a list_t list.
*@head: first node.
*@str: string given.
*Return: the address of the new element, or NULL if it failed.
*
*Auth: Titania792
*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *newnode, *lastnode;

	if (str == NULL)
		return (NULL);

    newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
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

#include "lists.h"

/**
*get_dnodeint_at_index - function that returns the nth node
*of a dlistint_t linked list
*@head: first node
*@index: he index of the node, starting from 0
*Return: the nth node of a listint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	current = head;

	if (current == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (current);
}

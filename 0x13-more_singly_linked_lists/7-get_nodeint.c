#include "lists.h"

/**
*get_nodeint_at_index - function that returns the nth node of
*a listint_t linked list.
*@index: is the index of the node, starting at 0.
*@head: pointer/first node.
*Return: the nth node of a listint_t linked list.
*
*Auth: Titania792.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	current = head;

	if (current == NUL)
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

#include "lists.h"

/**
*sum_listint - function that returns the sum of all the data
*(n) of a listint_t linked list.
*@head: pointer
*Return: returns the sum of all the data (n) of a listint_t linked list.
*
*Auth: Titania792
*/
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

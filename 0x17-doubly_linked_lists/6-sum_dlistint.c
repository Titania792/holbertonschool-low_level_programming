#include "lists.h"

/**
*sum_dlistint -  function that returns the sum of all
*the data (n) of a dlistint_t linked list
*@head: pointer
*Return: returns the sum of all the data (n) of a listint_t linked list.
*
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

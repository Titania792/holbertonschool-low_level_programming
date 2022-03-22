#include "lists.h"

/**
*insert_nodeint_at_index - function that inserts a new node at a given position.
*@head: pointer
*@idx: is the index of the list where the new node should be added. Index starts at 0
*@n: numb given
*
*Auth: Titania792
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size = getsize(*head);

    listint_t *newNode = malloc(sizeof(listint_t));
    newNode->n = n;
    newNode->next = NULL;

	if(idx > size)
		return (NULL);
	else if(idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
    }
	else
    {
        listint_t *possi = *head;

        while(--n)
            possi = possi->next;

        newNode->next= possi->next;
        possi->next = newNode;
    }
	return (newNode);
}

/**
*getsize - get the list size
*@head: pointer
*Return: size
*
*Auth: Titania792
*/
int getsize(listint_t *head)
{
	unsigned int size = 0;

    while (head != NULL)
    {
        head = head->next;
        size++;
    }
    return(size);
}

#include "lists.h"

/**
 * get_nodeint - will return the certain node of a listint_t linked list.
 * @index: is the index of a node counting from 0
 * Return: node in question or
 * NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

return (temp ? temp : NULL);
}

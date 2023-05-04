#include "lists.h"

/**
 * sum_listint - will calculate and return sum of all data of a listint_t in linked list.
 * return : the calculatde sum or
 * 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

return (sum);
}

#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in list
 * @head: head of the linked list
 * Return: sum on success 0 if empty
*/

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}

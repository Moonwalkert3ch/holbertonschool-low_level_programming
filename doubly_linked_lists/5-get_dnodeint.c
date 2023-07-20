#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t list
 * @head: head of dlistint_t linked list
 * @index: index of the node start at 0
 * Return: node on succeess, null on error
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

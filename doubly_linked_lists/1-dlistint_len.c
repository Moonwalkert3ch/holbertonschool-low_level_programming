#include "lists.h"

/**
 * dlistint_len - returns the number of elements in list
 * @h: header of dlistint_t list
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
	h = h->next;
	length++;
	}
	return (length);
}

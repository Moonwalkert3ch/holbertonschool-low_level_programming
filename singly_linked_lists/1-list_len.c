#include "lists.h"

/**
 * list_len  - function to rturn nmber oft elements.
 * @h: points to the head.
 * Description: returns elements in the list.
 * Return: elements on success
*/

size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}

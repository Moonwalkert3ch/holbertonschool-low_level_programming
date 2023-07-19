#include "lists.h"

/**
 * print_dlistint - prints all elements in list
 * @h: header of dlistint_t list
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int elementCount = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	elementCount++;
	}
	return (elementCount);
}

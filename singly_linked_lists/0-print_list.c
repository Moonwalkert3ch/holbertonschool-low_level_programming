#include "lists.h"

/**
 * print_list - function to print list elements.
 * @h: points to the head.
 * Description: prints all elements in the list.
 * Return: number of nodes, if
 * NULL that will be printed
*/

size_t print_list(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);

	h = h->next;
	elements++;
	}

	return (elements);
}

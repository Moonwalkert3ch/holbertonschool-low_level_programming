#include "lists.h"

/**
 * print_listint - prints all elements of list
 * @h: head node of list
 * Return: node count
*/

size_t print_listint(const listint_t *h)
{
size_t nodeCount = 0;

while (h)
{
printf("%d\n", h->n);
nodeCount++;
h = h->next;
}
return (nodeCount);
}

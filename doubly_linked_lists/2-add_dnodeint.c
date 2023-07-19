#include "lists.h"

/**
 * add_dnodeint - add new nodes to beginning of list
 * @n: held in dlistint_t list
 * @head: head of dlistint_t list.
 * Return: address of new element on success or null on error.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}

#include "lists.h"

/**
 * add_dnodeint_end - add new nodes to beginning of list
 * @n: held in dlistint_t list
 * @head: head of dlistint_t list.
 * Return: address of new element on success or null on error.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}

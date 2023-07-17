#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: The head of the list_t list
 * Description: Write a function that frees a list_t list.
 * Return: nothing
*/

void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}

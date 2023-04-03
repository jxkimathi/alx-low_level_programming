#include "lists.h"

/**
 * free_listint - Free a listint_t list
 * @head: Pointer to head of list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		head->next = tmp;
		free(head);
		head = tmp;
	}
}

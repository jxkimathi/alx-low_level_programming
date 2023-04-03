#include "lists.h"

/**
 * free_listint2 - Free a listint_t list
 * @head: Pointer to pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		(*head)->next = tmp;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}

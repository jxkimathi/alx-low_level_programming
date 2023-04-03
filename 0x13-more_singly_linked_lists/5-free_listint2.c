#include "lists.h"

/**
 * free_listint2 - Free a listint_t list
 * @head: Pointer to pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *current;

	if (head == NULL)
		return;

	current = *head;

	while (current)
	{
		new = current->next;
		free(current);
		current = new;
	}

	current = NULL;
}

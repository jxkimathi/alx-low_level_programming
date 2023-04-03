#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes
 * the node at index index of a
 * listint_t list
 * @head: Pointer to pointer to head
 * @index: Index of node to be deleted
 *
 * Return: 1 if succeeded
 * Otherwise return -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cpy = *head;
	unsigned int node;

	if (cpy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = *head->next;
		free(cpy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (cpy->next == NULL)
			return (-1);

		cpy = cpy->next;
	}

	tmp = cpy->next;
	cpy->next = tmp->next;
	free(tmp);

	return (1);
}

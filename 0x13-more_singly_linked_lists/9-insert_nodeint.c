#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a
 * new node in a given position
 * @head: Pointer to pointer to head
 * @idx: Indexto the new node
 * @n: Integer to be in new node
 *
 * Return: NULL if it fails
 * Otherwise return address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *cpy = *head;
	unsigned int node;

	new->n = n;

	if (idx == 0)
	{
		new->next = cpy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (cpy == NULL || cpy->next == NULL)
			return (NULL);

		cpy = cpy->next;
	}

	new->next = cpy->next;
	cpy->next = new;

	return (new);
}

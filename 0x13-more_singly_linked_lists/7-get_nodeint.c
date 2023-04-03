#include "lists.h"

/**
 * get_nodeint_at_index - Returns the
 * nth node of a listint_t list
 * @head: Pointer to head of list
 * @index: integer to be returned
 *
 * Return: NULL if node does not exist
 * Otherwise the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list
 * @head: Pointer to the head of a list
 * @index: Index of the node to receive
 *
 * Return: Pointer to the nth node, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}

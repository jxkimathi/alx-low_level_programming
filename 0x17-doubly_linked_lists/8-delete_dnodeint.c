#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a givenn index
 * @head: Pointer to the head of a list
 * @index: Index of node to delete
 *
 * Return: 1 upon deletion, otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1 = *head, *head2;
	unsigned int i;

	if (head1)
		while (head1->prev)
			head1 = head1->prev;

	i = 0;
	while (head1)
	{
		if (i == index)
		{
			if (i ==0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;
				if (head1->next != NULL)
					head1->next->prev = head2;
			}
			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		i++;
	}

	return (-1);
}

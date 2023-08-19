#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given point in a list
 * @h: Double pointer to the head of the list
 * @idx: Index of the list
 * @n: Value to place at the new node
 *
 * Return: Address of the new node, otherwise NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head = *h;
	unsigned int i;

	new = NULL;

	if (idx == 0)
		new = add_dnodeint(h, n);

	else
	{
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;

		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);

				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next= head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (new);
}

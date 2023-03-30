#include "lists.h"

/**
 * list_len - Return number of elements
 * in a linked list
 * @h: the linkked list_t list
 * @elements: number of elements
 *
 * Returns: elements
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

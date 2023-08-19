#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to the head of a list
 * @n: Value to be stored at the new node
 *
 * Return: Address of the new eement, otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;
	new->next = h;

	if (h)
		h->prev = new;

	*head = new;

	return (new);
}

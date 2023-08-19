#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node to the end of the list
 * @head: Pointer to pointer to the head of a list
 * @n: Value to add to the new node
 *
 * Return: Address of the new element, otherwise NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;

	if (!temp)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}

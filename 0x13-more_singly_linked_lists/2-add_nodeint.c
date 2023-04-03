#include "lists.h"

/**
 * add_nodeint - Adds a new node at the
 * beginning of a listint_t list
 * @head: Pointer to pointer of head
 * @n: Integer to be added
 *
 * Return: NULL if fail
 * Otherwise the address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

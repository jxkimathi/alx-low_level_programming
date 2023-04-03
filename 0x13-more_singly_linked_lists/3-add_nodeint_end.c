#include "lists.h"

/**
 * add_nodeint_end - Adds a new node
 * at the end of a listint_t list
 * @head: Pointer to pointer of head
 * @n: Integer to be added
 *
 * Return: NULL if fail
 * Otherwise address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last->next = last;
		last->next = new;
	}

	return (*head);
}

#include "lists.h"

/**
 * pop_listint - Deletes the node of a
 * listint_t list and returns head node
 * data
 * @head: Pointer to pointer to head
 *
 * Return: Head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int retrn;

	if (*head == NULL)
		return (0);

	tmp = *head;
	retrn = *head->next;
	*head = *head->next;

	free(tmp);

	return (retrn);
}

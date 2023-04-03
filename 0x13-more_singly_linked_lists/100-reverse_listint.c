#include "lists.h"

/**
 * listint_t *reverse_listint - Reverse
 * a listint_t list
 * @head: Pointer to pointer to head
 *
 * Return: Pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *heada, *behinda;

	if (head == NULL || *head == NULL)
		return (NULL);

	behinda = NULL;

	while ((*head)->next != NULL)
	{
		heada = (*head)->next;
		(*head)->next = behinda;
		behinda = *head;
		*head = heada;
	}

	(*head)->next = behinda;

	return (*head);
}

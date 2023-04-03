#include "lists.h"

/**
 * sum_listint - Returns the sum of
 * all data nof a listint_t list
 * @head: Pointer to head of list
 *
 * Return: 0 if list is empty
 * Otherwise the sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all datain the list
 * @head: Pointer to the head of a list
 *
 * Return: Sum of all elements, otherwise 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}

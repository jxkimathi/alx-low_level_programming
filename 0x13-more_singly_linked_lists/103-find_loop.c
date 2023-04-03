#include "lists.h"

/**
 * find_listint_loop - Finds the loop
 * in a linked list
 * @head: Pointer to the head of list
 *
 * Return: NULL if there is no loop
 * Otherwise Return address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *shark;

	if (head == NULL || head->next == NULL)
		return (NULL);

	turtle = head->next;
	shark = head->next->next;

	while (shark)
	{
		if (turtle == shark)
		{
			turtle = head;

			while (turtle != shark)
			{
				turtle = turtle->next;
				shark = shark->next;
			}

			return (turtle);
		}

		turtle = turtle->next;
		shark = shark->next->next;
	}

	return (NULL);
}

#include "lists.h"

/**
 * add_node - Adds a new node at the
 * end of a list_t list
 * @head: a pointer to the head
 * @str: string to be added
 *
 * Return: NULL if function fails
 * Otherwise the address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}

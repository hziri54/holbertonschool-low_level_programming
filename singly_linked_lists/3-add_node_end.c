#include "lists.h"

/**
 * add_node_end - Adds new node in the end
 *
 * @head: the og list
 *
 * @str: str to add node
 *
 * Return: new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *last;
	int len;
	char *dup;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(tmp);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	tmp->str = dup;
	tmp->len = len;
	tmp->next = NULL;

	if (*head == NULL)
		*head = tmp;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = tmp;
	}

	return (*head);
}

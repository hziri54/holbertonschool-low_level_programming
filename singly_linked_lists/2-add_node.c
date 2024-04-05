#include "lists.h"

/**
 * add_node - Adds new node
 *
 * @head: the og list
 *
 * @str: str to add node
 *
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int len;
	char *dup;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(tmp);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	tmp->str = dup;
	tmp->len = len;
	tmp->next = *head;

	*head = tmp;

	return (tmp);
}

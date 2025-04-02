#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: list
 * @str: string to add
 * Return: length of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;
	int i = 0;

	while (str[i])
	{
		i++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	tmp = *head;
	new_node->len = i;

	if (new_node->str == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
		return;
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}

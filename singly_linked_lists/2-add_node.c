#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * add_node - adds a new node at the end of a list_t list
 * @head: list
 * @str: string to add
 * Return: length of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		return (NULL);
	}
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}

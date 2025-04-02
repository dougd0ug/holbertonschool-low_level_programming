#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* *insert_dnodeint_at_index - Write a function that inserts
* a new node at a given position
* @h: list
* @idx: index we want to put the node
* @n: data to put
* Return: length of the list
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *tmp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*h == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node->next = tmp->next;
	if (tmp->next != NULL)
	{
		tmp->next->prev = new_node;
	}
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}

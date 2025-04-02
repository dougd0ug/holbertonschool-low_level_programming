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
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	tmp = *h;

	if (h != NULL)
	{
		if (i == idx)
		{
			tmp->next = new_node;
			new_node->prev = tmp;
		}
		*h = (*h)->next;
		i++;
	}
	else
	{
		*h = new_node;
		return (NULL);
	}
	return (new_node);
}

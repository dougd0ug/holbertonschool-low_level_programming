#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* delete_dnodeint_at_index - Write a function that deletes the node at index
* @head: list
* @index: index we want to put the node
* Return: length of the list
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	tmp = *head;
	if (tmp == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		free(*head);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	free(tmp);
	return (1);
}

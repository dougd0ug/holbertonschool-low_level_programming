#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* *get_dnodeint_at_index - Write a function that returns the nth node
* @head: list
* @index: index we want to check
* Return: length of the list
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			if (head->next == NULL && index > i)
			{
				return (NULL);
			}
			head = head->next;
		}
	}
	else
	{
		return (NULL);
	}
	return (head);
}

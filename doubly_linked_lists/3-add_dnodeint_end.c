#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* *add_dnodeint_end - Write a function that adds a new node at the end
* @head: list
* @n: number
* Return: length of the list
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
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

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	new_node->prev = tmp->next;
	return (new_node);
}

#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* *add_dnodeint - Write a function that adds a new node at the beginning
* @head: list
* @n: number
* Return: length of the list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

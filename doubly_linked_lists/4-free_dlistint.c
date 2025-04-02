#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* free_dlistint - Write a function that frees a dlistint_t list
* @head: list
* Return: length of the list
*/

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head->n);
		free(head);
		head = head->next;
	}
}

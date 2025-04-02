#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* sum_dlistint - Write a function that returns the sum of all the data (n)
* @head: list
* Return: length of the list
*/

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}

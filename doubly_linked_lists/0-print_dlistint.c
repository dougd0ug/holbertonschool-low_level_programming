#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* print_dlistint - print all elements of a list
* @h: list
* Return: length of the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	if (h == NULL)
	{
		return (length);
	}

	while (h != NULL)
	{
		printf("%d", h->n);
		length++;
		h = h->next;
	}
	return (length);
}

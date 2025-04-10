#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * list_len - Write a function that returns the number of elements
 * @h: list
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	int length = 0;

	if (h == NULL)
	{
		return (length);
	}

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}

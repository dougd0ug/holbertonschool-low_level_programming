#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * print_list - print all elements of a list
 * @h: list
 * Return: length of the list
 */

size_t print_list(const list_t *h)
{
	int length = 0;

	if (h == NULL)
	{
		return (length);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		length++;
		h = h->next;
	}
	return (length);
}

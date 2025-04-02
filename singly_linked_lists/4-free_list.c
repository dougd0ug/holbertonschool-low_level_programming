#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * free_list - Write a function that frees a list_t list
 * @head: list
 * Return: 0
 */

void free_list(list_t *head)
{
	free(head);
	return (0);
}
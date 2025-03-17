#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Write a function that searches for an integer
 * @array: tableau
 * @size: taille tableau
 * @cmp: different ways
 * Return: -1 or i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}

	return (i);
}

#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Write a function that executes a
 * function given as a parameter on each
 * element of an array
 * @array: tableau
 * @size: taille tableau
 * @action: different ways
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size == 0)
	{
		return;
	}

	for (i = 0; array[i] <= array[size]; i++)
	{
		action(array[i]);
	}
}

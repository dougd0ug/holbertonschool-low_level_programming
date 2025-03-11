#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Write a function that creates an array of integers
 * @min: array we want to concatenate
 * @max: array we want to concatenate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(((max - min) + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= (max - min); i++)
	{
		array[i] = min + i;
	}
	return (array);
}

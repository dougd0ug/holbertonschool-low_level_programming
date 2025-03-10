#include "main.h"
#include <stdlib.h>

/**
 * *alloc_grid - Write a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: largeur
 * @height: hauteur
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int **alloc_grid(int width, int height)
{
	int *copy;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	copy = malloc(sizeof(int) * (height + width));

	if (copy == NULL)
	{
		return (NULL);
	}
	height = 0;
	width = 0;
	return (*copy);
}

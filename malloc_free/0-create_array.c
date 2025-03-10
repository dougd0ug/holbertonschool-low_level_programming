#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Write a function that creates
 * an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: first char
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	
	tab = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
}

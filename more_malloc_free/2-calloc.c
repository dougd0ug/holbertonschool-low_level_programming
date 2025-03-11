#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Write a function that allocates memory for an array, using malloc
 * @nmemb: array we want to concatenate
 * @size: array we want to concatenate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	result = malloc(nmemb * size);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		((char *)result)[i] = 0;
	}
	return (result);
}

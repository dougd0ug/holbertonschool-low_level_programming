#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Write a function that frees dogs
 * @d: free dog
 * Return: pointer of new dog
 */

void free_dog(dog_t *d)
{
	free(d);
}

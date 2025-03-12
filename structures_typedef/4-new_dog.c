#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - Write a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer of new dog
 */

dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *new;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}

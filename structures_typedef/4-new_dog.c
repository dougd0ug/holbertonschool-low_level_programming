#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - Write a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *namecopy;
	char *ownercopy;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}

	namecopy = strdup(name);
	ownercopy = strdup(owner);

	if (namecopy == NULL || ownercopy == NULL)
	{
		free(namecopy);
		free(ownercopy);
		free(new);
		return (NULL);
	}

	new->name = namecopy;
	new->age = age;
	new->owner = ownercopy;

	return (new);
}

#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Write a function that initialize
 * a variable of type struct dog
 * @d: struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

	for (i = 0; name[i]; i++)
	{
		printf("Name: %s\n", name[i])
	}
	printf("Age: %d", age);

	for (i = 0; owner[i]; i++)
	{
		printf("Owner: %s", owner[i];)
	}
}

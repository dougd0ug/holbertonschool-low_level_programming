#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Write a function that prints a struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	int i;

	if (d != NULL)
	{
		return;
	}

	for (i = 0; name[i]; i++)
	{
		if (name == NULL)
		{
			printf("Name: (nil)");
			continue;
		}
		printf("Name: %s\n", name[i])
	}
	if (age == NULL)
	{
		printf("Age: (nil)");
	}
	else
	{
		printf("Age: %d", age);
	}
	for (i = 0; owner[i]; i++)
	{
		if (owner == NULL)
		{
			printf("Owner: (nil)");
			continue;
		}
		printf("Owner: %s", owner[i];)
	}
}

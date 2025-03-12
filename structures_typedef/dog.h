#ifndef DOG
#define DOG

/**
* struct dog - our dog parameter
* @name: dog name
* @age: dog age
* @owner: proprio
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

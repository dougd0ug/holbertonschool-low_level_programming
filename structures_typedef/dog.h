#ifndef DOG
#define DOG

/**
* struct dog - our dog parameter
* @name: dog name
* @age: dog age
* @owner: proprio
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

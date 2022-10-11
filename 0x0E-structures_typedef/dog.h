#ifndef dog_h
#define dog_h
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct dog - declares and defines the basic parameters for a dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: A type struct with information on a dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

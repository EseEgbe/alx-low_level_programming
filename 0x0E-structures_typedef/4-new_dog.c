#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Entry point.
 *
 * Description: A funtion that creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int name1, owner1, i;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);

	for (name1 = 0; *(name + name1); name1++)
		;
	name1++;
	for (owner1 = 0; *(owner + owner1); owner1++)
		;
	owner1++;

	newDog->name = malloc(name1 * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < name1; i++)
		*(newDog->name + i) = *(name + i);

	newDog->age = age;

	newDog->owner = malloc(owner1 * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < owner1; i++)
	*(newDog->owner + i) = *(owner + i);

	return (newDog);
}

#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -  A function that creates a new dog.
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: A pointer to newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *newName, *newOwner;
	int nameLength = 0, ownerLength = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[nameLength])
		nameLength++;
	while (owner[ownerLength])
		ownerLength++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	newName = malloc(nameLength + 1);
	if (newName == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		newName[i] = name[i];
	newName[i] = '\0';

	newOwner = malloc(ownerLength + 1);
	if (newOwner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		newOwner[i] = owner[i];
	newOwner[i] = '\0';

	new_dog->name = newName;
	new_dog->age = age;
	new_dog->owner = newOwner;
	return (new_dog);
}

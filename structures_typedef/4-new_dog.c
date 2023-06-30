#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog- entry to function
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL on fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char tmpName, tmpOwner;
	int i, j;

	for (i = 0; name[i] != '\0'; i++)
		tmpName[i] = name[i];

	for (j = 0; owner[j] != '\0'; j++)
		tmpOwner[j] = owner[j];

	tmpName[i] = '\0';
	tmpOwner[j] = '\0';

	dog_t *newdog;

	if ((name == NULL) || (age < 0) || (owner == NULL))
		return (NULL);

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * strlen(owner) +1);
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}

	newdog->name = tmpName;
	newdog->age = age;
	newdog->owner = tmpOwner;

	return(newdog);
}

#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creating a new dog
 * dog_t *new_dog(char *name, float age, char *owner) - function defintion for
 * creating a new dog
 * @name: first parameter name
 * @age: second parameter name
 * @owner: third parameter name
 * Return: newdog
*/
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *newdog;

	newdog = ((dog_t *)malloc(sizeof(dog_t)));

	if (newdog == NULL)
	{
	return (NULL);
	}

	newdog->name = ((char *)malloc(strlen(name) + 1));
	newdog->owner = ((char *)malloc(strlen(owner) + 1));

	if (newdog->name == NULL || newdog->owner == NULL)
	{
	free(newdog->name);
	free(newdog->owner);
	free(newdog);
	return (NULL);
	}
	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}

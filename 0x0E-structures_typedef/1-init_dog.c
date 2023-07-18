#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - intialize a variable type
 * void init_dog(struct dog *d, char *name, float age, char *owner) - function
 * definition to intialize a variable type
 * @d: parameter name for the pointer to struct
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

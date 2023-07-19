#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - freeing memory allocated to dog
 * void free_dog(dog_t *d) - function definition for free memory allocated to
 * dog
 * @dog_t - first parameter name
 * @d: parameter name for pointer to struct
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocating memory using malloc
 * void *malloc_checked(unsigned int b) - function definition for allocating
 * memory using malloc
 * @b: parameter name for integer
 * Return: Always 0.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

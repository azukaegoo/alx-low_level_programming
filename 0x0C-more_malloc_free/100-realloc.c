#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _realloc - relocating a memory block
 * void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) -
 * function definition for relocating a memory block
 * @ptr: first parameter
 * @old_size: second parameter
 * @new_size: third parameter
 * Return: Nothing.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	if (ptr == NULL)
	{
	return (malloc(new_size));
	}
	if (new_size == old_size)
	{
	return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr != NULL)
	{
	min_size = old_size < new_size ? old_size : new_size;
	memcpy(new_ptr, ptr, min_size);
	free(ptr);
	}
	return (new_ptr);
}

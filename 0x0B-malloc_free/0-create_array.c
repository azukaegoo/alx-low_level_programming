#include "main.h"
#include <stdlib.h>
/**
 * create_array - creating an array of chars
 * @size: first parameter
 * @c: second parameter
 *
 * Return: Nothing.
*/
char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array);
}

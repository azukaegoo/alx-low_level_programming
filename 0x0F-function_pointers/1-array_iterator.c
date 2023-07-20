#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - executing a function given as a parameter on each element
 * of an array
 * void array_iterator(int *array, size_t size, void (*action)(int)) -
 * function definition for executing a function given as a parameter on each
 * element
 * @array: first parameter name
 * @size: second parameter name
 * @action: third parameter name
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

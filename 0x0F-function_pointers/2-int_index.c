#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - searching for an integer
 * int int_index(int *array, int size, int (*cmp)(int)) - function definition
 * for searching for an integer
 * @array: first parameter
 * @size: second parameter
 * @cmp: third parameter
 * Return: if no element matches and size is less or equal to 0 return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	return (-1);
}

#include "main.h"
#include <stdlib.h>
/**
 * array_range - creating a range of array of integers
 * int *array_range(int min, int max) - function definition for creating a
 * range of array of integers
 * @min: first parameter
 * @max: second parameter
 * Return: Nothing.
*/
int *array_range(int min, int max)
{
	int size, i, *arr;

	if (min > max)
	{
	return (NULL);
	}

	size = max - min + 1;
	arr = ((int *)malloc(size * sizeof(int)));
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}

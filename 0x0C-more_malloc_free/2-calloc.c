#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocating memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory
 * void *_calloc(unsigned int nmemb, unsigned int size) - function defintion
 * for allocating memory for an array of nmemb elements of size bytes
 * @nmemb: first parameter
 * @size: second parameter
 * Return: Nothing.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *lloc;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	lloc = malloc(nmemb * size);
	if (lloc != NULL)
	{
	memset(lloc, 0, nmemb * size);
	}
	return (lloc);
}

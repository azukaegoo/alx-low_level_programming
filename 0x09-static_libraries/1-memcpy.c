#include "main.h"
#include <string.h>
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * char *_memcpy(char *dest, char *src, unsigned int n) - function for copying
 * memory area
 * @n: Parameter name for the integer
 * @src: parameter name for the memory area
 * @dest: parameter name for the other memory area
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

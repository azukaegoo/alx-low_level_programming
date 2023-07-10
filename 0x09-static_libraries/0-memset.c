#include "main.h"
#include <string.h>
/**
 * _memset - function fills the first n bytes of the memory area pointed to by
 * s withthe constant byte c.
 * char *_memset(char *s, char b, unsigned int n) - function for filling
 * the memory with a constant byte
 * @n: parameter name for bytes numbers
 * @b: parameter name for the constant byte
 * @s: parameter name for the pointer
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

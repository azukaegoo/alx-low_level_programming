#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of the
 * string str
 * char *_strdup(char *str) - function definition of returning a pointer to a
 * new string which is a duplicate of the string str
 * @str: parameter name for the string
 * Return: Always 0.
*/
char *_strdup(char *str)
{
	unsigned int size;
	char *str_cpy;
	unsigned int i;

	if (str == NULL)
	{
	return (NULL);
	}
	size = 0;
	while (str[size] != '\0')
	{
	size++;
	}
	str_cpy = malloc((size + 1) * sizeof(char));

	if (str_cpy == NULL)
	{
	return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	str_cpy[i] = str[i];
	}
	return (str_cpy);
}

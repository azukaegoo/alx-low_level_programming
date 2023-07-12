#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenating two strings
 * char *str_concat(char *s1, char *s2) - function definition for concatenating
 * two strings
 * @s1: parameter name for first string
 * @s2: parameter name for second string
 * Return: Always 0.
*/
char *str_concat(char *s1, char *s2)
{
	char *con_cat;
	unsigned int size;
	unsigned int size_s;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	size = size_s = 0;
	while (s1[size] != '\0')
	size++;
	while (s2[size_s] != '\0')
	size_s++;

	con_cat = malloc((size + size_s + 1) * sizeof(char));

	if (con_cat == NULL)
	return (NULL);
	size = size_s = 0;
	while (s1[size] != '\0')
	{
		con_cat[size] = s1[size];
		size++;
	}
	while (s2[size_s] != '\0')
	{
		con_cat[size] = s2[size_s];
		size++;
		size_s++;
	}
	con_cat[size] = '\0';
	return (con_cat);
}

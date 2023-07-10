#include "main.h"
/**
 * _strcmp - function compares the two strings s1 and s2
 * int _strcmp(char *s1, char *s2) - function defintion for comparing two
 * strings
 * @s1: parameter name for first string
 * @s2: parameter name for second string
 * Return: *s1 - *s2
*/
int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{

	return (*s1 - *s2);

	}
	{
		s1++;
		s2++;
	}
	}

	return (*s1 - *s2);
}

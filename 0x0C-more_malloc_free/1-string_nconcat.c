#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - concatenating two strings
 * char *string_nconcat(char *s1, char *s2, unsigned int n) - function
 * definition concatenating two strings
 * @s1: first string parameter name
 * @s2: second string parameter name
 * @n: parameter name for integer
 * Return: Always 0.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenOne, lenTwo, nconcat;
	char *total;

	lenOne = 0;
	lenTwo = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	lenOne = strlen(s1);
	lenTwo = strlen(s2);
	if (n >= lenTwo)
	{
		n = lenTwo;
	}
	nconcat = lenOne + n;

	total = ((char *)malloc((nconcat + 1) * sizeof(char)));
	if (total == NULL)
	{
	return (NULL);
	}
	{
	strcpy(total, s1);
	strncat(total, s2, n);
	}
	return (total);
}

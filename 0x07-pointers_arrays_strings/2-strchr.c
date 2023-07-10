#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the character
 * char *_strchr(char *s, char c) - function that locates a character in a
 * string
 * @s: parameter name for the string
 * @c: parameter name for the character
 * Return: s if character is found  or null if the character is not found
*/
char *_strchr(char *s, char c)
{

	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	{
	return (&s[i]);
	}
	}
	return (0);
}

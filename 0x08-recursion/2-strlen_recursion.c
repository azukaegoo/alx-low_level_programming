#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - returning the length of a string
 * int _strlen_recursion(char *s) - function defintion for returning the length
 * of a string
 * @s: parameter name for the string
 * Return: Always 0.
*/
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
	return (0);
	}
	{
	return (1 + _strlen_recursion(s + 1));
	}
}

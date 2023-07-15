#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checking if a string contains a non-digit
 * @s: parameter name for string
 * Return: 0 if a non-digit is found, 1 otherwise
*/
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
	if (s[i] < '0' || s[i] > '9')
	{
	return (0);
	i++;
	}
	return (1);
}
/**
 * _strlen - returning the length of a string
 * @s: parameter name for the string
 * Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

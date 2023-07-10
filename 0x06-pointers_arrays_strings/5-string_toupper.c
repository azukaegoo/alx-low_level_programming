#include "main.h"
/**
 * string_toupper - changing all lowercase letters of a string to uppercase
 * char *string_toupper - function definition for changing all lowercase
 * letters of a string to uppercase
 * @str : parameter name for the string
 * Return: str
*/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
		*ptr = *ptr - ('a' - 'A');
	}
	{
		ptr++;
	}
	}

	return (str);
}

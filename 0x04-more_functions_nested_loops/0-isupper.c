#include "main.h"
/**
 * _isupper - checks if c, which must have the value of an unsigned char
 * int _isupper(int c) - checking for upper case character
 * @c: the parameter name of the character
 * Return: 1 for uppercase and 0 for otherwise
*/
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

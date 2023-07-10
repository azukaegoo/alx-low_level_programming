#include "main.h"
/**
 * _isalpha - check c, which must have the value of an unsigned char
 * int _isalpha(int c) - checking for alphabetic character
 * @c: is the character that is being checked
 * Return: 1 for lowercase or uppercae and 0 for otherwise
*/
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

#include "main.h"
/**
 * _isdigit - checks for digit
 * int _isdigit(int c) - check for digit
 * @c: parameter name of the character
 * Return: 1 for digit and 0 for otherwise
*/
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

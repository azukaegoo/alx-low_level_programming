#include "main.h"
/**
 * _abs - computes the absolute value of the integer argument
 * int _abs(int) - computing the absolute value of an integer
 * @c: is the parameter name of the integer argument
 * Return: -c for less than 0 and c for greater than 0
*/
int _abs(int c)
{

	if (c < 0)
	{
	return (-c);
	}
	else
	{
	return (c);
	}
}

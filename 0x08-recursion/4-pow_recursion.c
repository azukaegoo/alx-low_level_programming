#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returning the value of x raised to the power y
 * int _pow_recursion(int x, int y) - function defition for returning the value
 * of x raised to the power y
 * @x: first parameter name of the integer
 * @y: second parameter name for the second integer
 * Return: Always 0.
*/
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}


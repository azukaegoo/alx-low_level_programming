#include "main.h"
/**
 * factorial - is the multiplication of all the numbers between 1 and the
 * number itself
 * int factorial - function definition that returns the factorial of a given
 * number
 * @n: parameter name for the integer
 * Return: Always 0.
*/
int factorial(int n)
{

	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	return (n * factorial(n - 1));
}

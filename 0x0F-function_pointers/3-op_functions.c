#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - returning the sum of two integers
 * @a: first parameter name
 * @b: second parameter name
 * Return: the result of the sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returning the difference of two integers
 * @a: first parameter name
 * @b: second parameter name
 * Return: the result of the difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returning the multiplication of two integers
 * @a: first parameter name
 * @b: second parameter name
 * Return: the result of the multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returning the division of two integers
 * @a: first parameter name
 * @b: second parameter name
 * Return: the result of the division
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returning the remainder of the division of two integers
 * @a: first parameter name
 * @b: second parameter name
 * Return: the result of the division remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}

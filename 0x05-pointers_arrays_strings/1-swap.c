#include "main.h"
/**
 * swap_int - swapping integers
 * void swap_int(int *a, int *b) - function definition for swapping integers
 * @a: parameter name for first integer
 * @b: parameter name for second integer
 * Return: Always 0.
*/
void swap_int(int *a, int *b)
{

	int num;

	num = *a;
	*a = *b;
	*b = num;
}

#include "main.h"
/**
 * print_array - prints the element of an array of integers
 * void print_array(int *a, int n) - function for printing an array of integers
 * @a: parameter name of first integer
 * @n: parameter name of second integer
 * Return: Always 0.
*/
void print_array(int *a, int n)
{

	int numC;

	for (numC = 0 ; numC < n ; numC++)
	{
		printf("%d", a[numC]);

	if (numC < n - 1)
	{
		printf(", ");
	}
	}
		printf("\n");
}

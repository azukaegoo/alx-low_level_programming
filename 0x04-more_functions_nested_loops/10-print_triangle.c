#include "main.h"
/**
 * print_triangle - printing a triangle
 * void print_triangle(int size) - function definition to print a triangle
 * @size: parameter name
 * Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int lt;
	int llt;
	int lllt;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (lt = 1 ; lt <= size ; lt++)
	{
	for (lllt = size - lt ; lllt >= 1 ; lllt--)
	{
		_putchar(' ');
	}
	for (llt = 1 ; llt <= lt ; llt++)
	{
		_putchar('#');
	}
	{
		_putchar('\n');
	}
	}
}

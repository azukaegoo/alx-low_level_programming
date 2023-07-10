#include "main.h"
/**
 * print_diagonal - drawing a diagonal line
 * void print_diagonal(int n) - function for printing a diagonal line
 * @n: parameter name
 * Return: Always 0 (Success)
*/
void print_diagonal(int n)
{

	int dl;
	int dll;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (dl = 0 ; dl < n ; dl++)
	{
	for (dll = 0 ; dll < dl ; dll++)
	{
		_putchar(' ');
	}
		_putchar('\\');
		_putchar('\n');
	}
}

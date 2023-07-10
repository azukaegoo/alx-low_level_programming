#include "main.h"
/**
 * print_line - printing line
 * void print_line(int n) - printing a straight line
 * @n: parameter character
 * Return: Always 0 (Success)
*/
void print_line(int n)
{
	int l;

	for (l = 0 ; l < n ; l++)
	{
		_putchar('_');
	}
	{
		_putchar('\n');
	}
}

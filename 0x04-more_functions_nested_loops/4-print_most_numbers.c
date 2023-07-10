#include "main.h"
/**
 * print_most_numbers - print most numbers
 * void print_most_numbers(void) - printing the numbers
 * Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
	int d;

	for (d = 0 ; d <= 9 ; d++)
	{
	if (d != 2 && d != 4)
	{
		_putchar(d + '0');
	}
	}
	{
		_putchar('\n');
	}
}

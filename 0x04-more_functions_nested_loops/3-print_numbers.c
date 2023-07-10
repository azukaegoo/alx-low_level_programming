#include "main.h"
/**
 * print_numbers - print numbers
 * void print_numbers(void) - for printing numbers
 * @: parameter name
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int d;

	for (d = '0' ; d <= '9' ; d++)
	{
		_putchar(d);
	}
	{
		_putchar('\n');
	}
}

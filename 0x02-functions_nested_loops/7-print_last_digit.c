#include "main.h"
/**
 * print_last_digit - printing the last digit
 * int print_last_digit(int) - function definition for printing the last digit
 * @r: parameter name for the function of printing the last digit
 * Return: ld
*/
int print_last_digit(int r)
{
	int ld;

	ld = r % 10;
	if (ld < 0)
	{
	ld = ld * -1;
	}
	{
		_putchar('0' + ld);
	}
	return (ld);
}

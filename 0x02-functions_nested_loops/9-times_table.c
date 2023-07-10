#include "main.h"
/**
 * times_table - printing the 9 times table
 * void times_table(void) - printing the 9times table starting with zero
 * Return: Always 0 (Success)
*/
void times_table(void)
{

	int numOne;
	int numTwo;

	for (numOne = 0 ; numOne <= 9 ; numOne++)
	{
	for (numTwo = 0 ; numTwo <= 9 ; numTwo++)
	{

	int total = numOne * numTwo;

	if (numTwo == 0)
	{
		_putchar('0');
	}

	else if (total < 10)
	{
		_putchar(' ');
		_putchar('0' + (total));
	}

	else
	{
		_putchar('0' + total / 10);
		_putchar('0' + total % 10);
	}

	if (numTwo < 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
		_putchar('\n');
	}
}

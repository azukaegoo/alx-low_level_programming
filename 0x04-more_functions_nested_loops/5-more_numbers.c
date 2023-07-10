#include "main.h"
/**
 * more_numbers - prints more numbers
 * void more_numbers(void) - definition function for printing more numbers
 * Return: Always 0 (Success)
*/
void more_numbers(void)
{

	int numTimes;
	int num;

	for (numTimes = 0 ; numTimes < 10 ; numTimes++)
	{
	for (num = 0 ; num <= 14 ; num++)
	{
	if (num > 9)
	{
		_putchar('0' + num / 10);
	}
		_putchar('0' + num % 10);
	}
		_putchar('\n');
	}
}

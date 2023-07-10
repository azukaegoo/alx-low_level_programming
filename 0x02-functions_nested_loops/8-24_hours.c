#include "main.h"
/**
 * jack_bauer - printing every minute of the day of Jack bauer
 * void jack_bauer(void) - function definition to printingj every minute
 * Return: Always 0 (Success)
*/
void jack_bauer(void)
{

	int hr;
	int min;

	for (hr = 0 ; hr < 24 ; hr++)
	{
	for (min = 0 ; min < 60 ; min++)
	{
		_putchar('0' + (hr / 10));
		_putchar('0' + (hr % 10));
		_putchar(':');
		_putchar('0' + (min / 10));
		_putchar('0' + (min % 10));
		_putchar('\n');
	}
	}
}

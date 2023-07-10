#include "main.h"
/**
 * print_alphabet_x10 - print in lowercase
 *
 * Return: void
*/
void print_alphabet_x10(void)
{
	char lowerCase;
	int numTimes;

	for (numTimes = 0 ; numTimes < 10 ; numTimes++)
	{
	for (lowerCase = 'a' ; lowerCase <= 'z' ; lowerCase++)
	{
		_putchar(lowerCase);
	}
		_putchar('\n');
	}
}

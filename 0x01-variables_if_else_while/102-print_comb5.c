#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int numOne;
	int numTwo;

	for (numOne = 0 ; numOne < 100 ; numOne++)
	{
	for (numTwo = numOne ; numTwo < 100 ; numTwo++)
	{
	if (numOne != numTwo)
	{
		putchar((numOne / 10) + '0');
		putchar((numOne % 10) + '0');
		putchar(' ');
		putchar((numTwo / 10) + '0');
		putchar((numTwo % 10) + '0');
	if (numOne != 98 || numTwo != 99)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	{
		putchar('\n');
	}
	return (0);
}

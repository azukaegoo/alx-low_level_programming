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

	for (numOne = 0 ; numOne <= 8 ; numOne++)
	{
	for (numTwo = numOne + 1 ; numTwo <= 9 ; numTwo++)
	{
		putchar(numOne + '0');
		putchar(numTwo + '0');
	if (numOne != 8 || numTwo != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	{
		putchar('\n');
	}
	return (0);
}

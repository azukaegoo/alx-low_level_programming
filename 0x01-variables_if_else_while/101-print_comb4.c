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
	int numThree;

	for (numOne = 0 ; numOne <= 7 ; numOne++)
	{
	for (numTwo = numOne + 1 ; numTwo <= 8 ; numTwo++)
	{
	for (numThree = numTwo + 1 ; numThree <= 9 ; numThree++)
	{
		putchar(numOne + '0');
		putchar(numTwo + '0');
		putchar(numThree + '0');
	if (numOne != 7 || numTwo != 8 || numThree != 9)
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

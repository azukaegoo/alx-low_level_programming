#include "main.h"
#include <stdio.h>
/**
 * main - printing the largestprime factor
 * Return: Always 0 (Success)
*/
int main(void)
{

	unsigned long int i;
	unsigned long int n;

	n = 612852475143;

	for (i = 3 ; i < 782849 ; i = i + 2)
	{
	while (n % i == 0 && n != i)
		n = n / i;
	}
		printf("%lu\n", n);
	return (0);
}

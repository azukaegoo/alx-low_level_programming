#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char num;
	char lowerCase;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}
	for (lowerCase = 'a' ; lowerCase <= 'f' ; lowerCase++)
	{
		putchar(lowerCase);
	}
	{
		putchar('\n');
	}
	return (0);
}

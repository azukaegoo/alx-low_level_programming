#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char lowerCase;

	for (lowerCase = 'a' ; lowerCase <= 'z' ; lowerCase++)
	if (lowerCase != 'e' && lowerCase != 'q')
	{
		putchar(lowerCase);
	}
	{
		putchar('\n');
	}
	return (0);
}

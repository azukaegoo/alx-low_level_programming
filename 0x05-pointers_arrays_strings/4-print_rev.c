#include "main.h"
/**
 * print_rev - print a string in reverse
 * void print_rev(char *s) - function for printing a string in reverse
 * @s: parameter name
 * Return: Always 0.
*/
void print_rev(char *s)
{

	int l;
	int ll;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (ll = l - 1 ; ll >= 0; ll--)
	{
		_putchar(s[ll]);
	}
	{
		_putchar('\n');
	}
}

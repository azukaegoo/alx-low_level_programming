#include "main.h"
/**
 * puts_half - prints half of a string
 * void puts_half(char *str) - function for printing half of a string
 * @str: parameter name
 * Return: Always 0.
*/
void puts_half(char *str)
{

	int l;
	int stNum;
	int il;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	stNum = (l + 1) / 2;

	for (il = stNum ; il < l ; il++)
	{
		_putchar(str[il]);
	}
	{
		_putchar('\n');
	}
}

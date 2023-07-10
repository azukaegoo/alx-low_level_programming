#include "main.h"
/**
 * puts2 - prints every other character of a string
 * void puts2(char *str) - function for printing every other character of a
 * string
 * @str: parameter name
 * Return: Always 0.
*/
void puts2(char *str)
{
	int st;

	st = 0;

	while (str[st] != '\0')
	{
		_putchar(str[st]);
		st += 2;
	}
	{
		_putchar('\n');
	}
}

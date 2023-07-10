#include "main.h"
/**
 * _puts - writes the string and a trailing newline to stdout
 * void _puts(char *str) - defintion function thst prints a string
 * @str: parameter character name
 * Return: Always 0.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	{
		_putchar('\n');
	}
}

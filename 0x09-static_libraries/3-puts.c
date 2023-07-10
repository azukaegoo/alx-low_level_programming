#include "main.h"
/**
 * _puts - writes the string and a trailing newline to stdout
 * void _puts(char *s) - defintion function thst prints a string
 * @s: parameter character name
 * Return: Always 0.
*/
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	{
		_putchar('\n');
	}
}

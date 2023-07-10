#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - writes the string s and a trailing newline
 * void _puts_recursion(char *s) - function definition for printing a string
 * followed by a new line
 * @s: parameter name for the string
 * Return: Always 0.
*/
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
	return;
	}
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

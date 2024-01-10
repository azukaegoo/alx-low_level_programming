#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function definition for printing.
 * void_puts_recursion(char *s) - function definition for printing a string.
 * @s: character variable
 * return: 0
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}

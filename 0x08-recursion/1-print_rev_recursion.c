#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - printing the string in reverse
 * void _print_rev_recursion(char *s) - function defintion for printing the
 * string in reverse
 * @s: parameter name for the string
 * Return: Always 0.
*/
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
	return;
	}
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

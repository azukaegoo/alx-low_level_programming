#include "function_pointers.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - printing a name
 * void print_name(char *name, void (*f)(char *)) - function definition for
 * printing a name
 * @name: first parameter
 * @f: second parameter
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

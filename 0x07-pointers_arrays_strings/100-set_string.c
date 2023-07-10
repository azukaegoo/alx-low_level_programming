#include "main.h"
/**
 * set_string - setting the value of a pointer to a char
 * void set_string(char **s, char *to) - function for setting the value of a
 * pointer to a char
 * @s: first parameter
 * @to: second parameter
 * Return: Always 0.
*/
void set_string(char **s, char *to)
{

	*s = to;
}

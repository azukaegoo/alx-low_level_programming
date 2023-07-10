#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * int main(int c, char **v) - function definition
 * @c: first parameter name
 * @v: second parameter name
 * Return: Always 0 (sucess)
*/
int main(__attribute__((unused)) int c, __attribute__((unused)) char **v)
{
	printf("%s\n", *v);
	return (0);
}

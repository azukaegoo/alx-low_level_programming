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
int main(int c, char **v)
{
	int i;
	int j;

	if (c < 3)
	{
		printf("Error\n");
	return (1);
	}

	i = atoi(v[1]);

	for (j = 2; j < c; j++)
	{
	i *= atoi(v[j]);
	}
	printf("%d\n", i);
	return (0);
}

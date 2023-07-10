#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	char *num;

	if (c == 1)
	{
		printf("0\n");
	return ('\0');
	}
	else if (!isdigit(*v[1]))
	{
	printf("Error\n");
	return (1);
	}

	i = atoi(v[1]);

	for (j = 2; j < c; j++)
	{
	num = v[j];
	while (*num != '\0')
	{
	if (!isdigit((unsigned char)*num))
	{
		printf("Error\n");
	return (1);
	}
	num++;
	}
	i += atoi(v[j]);
	}
	printf("%d\n", i);
	return (0);
}

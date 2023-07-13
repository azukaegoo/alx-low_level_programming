#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenating all the arguments
 * char *argstostr(int ac, char **av) - function definition for concatenating
 * all the arguments
 * @ac: first parameter
 * @av: second parameter
 * Return: Always 0.
*/
char *argstostr(int ac, char **av)
{
	int i, j, size = 0, size_s = 0;
	char *tostr;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
		size_s++;
	}
	size_s += ac;

	tostr = malloc(size_s + 1 * sizeof(char));
	if (tostr == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		tostr[size] = av[i][j];
		size++;
	}
	if (tostr[size] == '\0')
	{
	tostr[size++] = '\n';
	}
	}
	return (tostr);
}

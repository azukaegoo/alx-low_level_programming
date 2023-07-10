#include "main.h"
/**
 * rot13 - encoding a string
 * char *rot13(char *) - function defintion fir encoding the string
 *@str: string parameter
 * Return: str
*/
char *rot13(char *str)
{

	int i;
	int j;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; x[j] != '\0'; j++)
	{
	if (str[i] == x[j])
	{
		str[i] = y[j];
	break;
	}
	}
	}

	return (str);
}

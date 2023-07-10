#include "main.h"
/**
 * leet - encoding a string
 * char *leet(char *) - function definition for encoding a string
 * @str: parameter name for the string
 * Return: str
*/
char *leet(char *str)
{

	int count = 0, i;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
	for (i = 0; i < 5; i++)
	{
	if (*(str + count) == lowercase[i] || *(str + count) == uppercase[i])
	{
		*(str + count) = num[i];
	break;

	}
	}
		count++;
	}

	return (str);
}


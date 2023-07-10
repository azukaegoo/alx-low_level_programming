#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * char *_strcat(char *dest, char *src) - function that concatenates two string
 * @dest: second parameter string
 * @src: first parameter string
 * Return: mainDest
*/
char *_strcat(char *dest, char *src)
{
	char *mainDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	{
		*dest = '\0';
	}

	return (mainDest);
}

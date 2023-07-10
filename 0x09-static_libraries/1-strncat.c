#include "main.h"
/**
 * _strncat - appends the src string to the dest string
 * char *_strncat(char *dest, char *src) - function that concatenates two strin
 * @dest: second parameter string
 * @src: first parameter string
 * @n: paramter name for integer
 * Return: mainDest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *mainDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	{
		*dest = '\0';
	}

	return (mainDest);
}

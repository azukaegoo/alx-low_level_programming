#include "main.h"
/**
 * _strncpy - function copies the string pointed to by src
 * char *_strncpy(char *dest, char *src, int n) - function that copies a
 * string
 * @dest: second parameter string
 * @src: first parameter string
 * @n: paramter name for integer
 * Return: mainDest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *mainDest = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (mainDest);
}

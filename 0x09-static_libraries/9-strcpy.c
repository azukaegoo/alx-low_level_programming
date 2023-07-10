#include "main.h"
/**
 * *_strcpy - function  copies  the string pointed to by src
 * char *_strcpy(char *dest, char *src) - function that copies the string
 * pointed to
 * @dest: first parameter
 * @src: second parameter
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

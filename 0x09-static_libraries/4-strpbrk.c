#include "main.h"
/**
 * _strpbrk - function locates the first occurrence in the string s of any of
 * the bytes in the string accept
 * @s: first parameter
 * @accept: second parameter
 * Return: s or null
*/
char *_strpbrk(char *s, char *accept)
{

	char *a;

	while (*s != '\0')
	{
	a = accept;
	while (*a != '\0')
	{
	if (*s == *a)
	{
	return (s);
	}
	a++;
	}
	{
	s++;
	}
	}
	return ('\0');
}

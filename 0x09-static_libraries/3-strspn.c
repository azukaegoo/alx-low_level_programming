#include "main.h"
#include <string.h>
/**
 * _strspn - Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * unsigned int _strspn(char *s, char *accept) - function that gets the
 * length of a prefix substring
 * @s: parameter name of initial segment
 * @accept: second parameter name
 * Return: count
*/
unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;
	int find;
	char *a;

	while (*s != '\0')
	{
	find = 0;
	a = accept;
	while (*a != '\0')
	{
	if (*s == *a)
	{
	find = 1;
	break;
	}
	a++;
	}
	if (find == 0)
	{
	break;
	}
	count++;
	s++;
	}
	return (count);
}
